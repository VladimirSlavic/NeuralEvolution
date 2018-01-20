//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_ENGINE_H
#define NEUROEVOLUTION_ENGINE_H

#include <iostream>
#include "../genetics/population.h"
#include "../neural/neural_network.h"
#include "../genetics/mutation_operators/abstract_mutation.h"
#include "../genetics/crossover_operators/abstract_crossover.h"

class Engine {

public:
    Engine(int pop_sze, std::string mutation_typ, std::string crossover_typ,
           NeuralNetwork& network_, double mut_prob, Dataset& dataset, double which_mutation = 0.6,
           double sigma1=1.0, double sigma2=1.0);
    ~Engine();
    void start_engine(const int MAX_ITER);

private:
    void init_pop_fitnesses();
    void set_fitness(Chromosome& chromosome);

private:
    Population population;
    std::string mutation_type;
    std::string crossover_type;
    NeuralNetwork network;
    AbstractMutator* mutator;
    AbstractCrossover* crosser;
    double mutation_probability;
    Dataset dataset;
    std::vector<AbstractMutator*> mutators;
    std::vector<AbstractCrossover*> abstract_crossers;
    double mutation_choice;

};


#endif //NEUROEVOLUTION_ENGINE_H
