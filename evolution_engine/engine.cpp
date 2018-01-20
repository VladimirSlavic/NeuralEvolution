//
// Created by elrond on 1/17/18.
//

#include <algorithm>
#include "engine.h"
#include "../genetics/crossover_operators/uniform_crossover.h"
#include "../genetics/mutation_operators/add_mutation.h"
#include "../genetics/mutation_operators/switch_mutation.h"
#include "../genetics/crossover_operators/arithmetic_crossover.h"
#include "../genetics/crossover_operators/selection_crossover.h"

Engine::Engine(int pop_sze, std::string mutation_typ, std::string crossover_typ, NeuralNetwork &network_,
               double mut_prob, Dataset &data,double which_mutation, double sigma1, double sigma2) : mutation_type{mutation_typ},
                                                                               crossover_type{crossover_typ},
                                                                               network{network_},
                                                                               population{pop_sze,
                                                                                          network_.number_of_parameters(),
                                                                                          network_.get_layers()},
                                                                               mutation_probability{mut_prob},
                                                                               dataset{data}, mutation_choice{which_mutation}{

    if (crossover_typ == "uniform") {
        crosser = new UniformCrossover();
    } else if (crossover_typ == "arithmetic") {
        crosser = new ArithmeticCrossover();
    } else if (crossover_typ == "selection") {
        crosser = new SelectionCrossover();
    } else {
        throw std::runtime_error("crossover type: " + crossover_typ + " does not exist");
    }

    mutators.push_back(new AddMutator(sigma1, sigma2));
    mutators.push_back(new SwitchMutator(sigma1, sigma2));

    abstract_crossers.push_back(new ArithmeticCrossover());
    abstract_crossers.push_back(new UniformCrossover());
    abstract_crossers.push_back(new SelectionCrossover());

}

void Engine::start_engine(const int MAX_ITER) {

    int generation_num = 0;
    int N = population.get_size();
    int count = 0;
    init_pop_fitnesses();
    std::default_random_engine engine;
    engine.seed(time(0));
    auto probz = std::bind(std::uniform_real_distribution<>(0, 1), engine);
    auto cross_idx = std::bind(std::uniform_int_distribution<>(0, 2), engine);

    while (true) {

        population.sort();

        if (count == 0) {
            std::cout << "best chromosome score: " << population[0].get_fitness() << std::endl;
        }

        if (count % N == 0 && count != 0){
            generation_num++;
        }

        std::vector<int> idxs = population.selection();
        std::sort(idxs.begin(), idxs.end());

        Chromosome child = abstract_crossers[cross_idx()]->crossover(population[idxs[0]], population[idxs[1]]);


        if (probz() <= mutation_choice) {
            mutators[0]->mutate(child, mutation_probability);
        }else{
            mutators[1] -> mutate(child, mutation_probability);
        }

        set_fitness(child);

        population[idxs[2]] = child;
        if (count % 10000 == 0) {
            std::cout << "Current best chromosome created has mse: " << population[0].get_fitness() << ", generation count: " << generation_num << std::endl;
        }

        if(child.get_fitness() <= 1e-7){
            break;
        }

        if (count >= MAX_ITER) break;
        count++;
    }

    population.sort();
    std::cout << "New best chromosome created has mse: " << population[0].get_fitness() << ", count: " << count << std::endl;
    std::cout << population[0] << std::endl;


}

void Engine::init_pop_fitnesses() {

    for (int i = 0; i < population.get_size(); i++) {
        set_fitness(population[i]);
    }

}

void Engine::set_fitness(Chromosome &chromosome) {
    chromosome.set_fitness(network.calc_error(dataset, chromosome.get_genes())); //set chromo fitness
}

Engine::~Engine() {
    if (!crosser) {
        delete crosser;
    }
    if (!mutator) {
        delete mutator;
    }

    for (AbstractMutator *mut : mutators) {
        if (!mut) {
            delete mut;
        }
    }

}
