//
// Created by elrond on 1/18/18.
//

#ifndef NEUROEVOLUTION_SELECTION_CROSSOVER_H
#define NEUROEVOLUTION_SELECTION_CROSSOVER_H

#include <random>
#include <iostream>
#include "abstract_crossover.h"

class SelectionCrossover : public AbstractCrossover{
public:
    SelectionCrossover(): uniform_distro{0,1.0} {
        engine.seed(time(0));
    }


    Chromosome crossover(Chromosome &parent1, Chromosome &parent2) override {

        if(parent1.get_fitness() < parent2.get_fitness()){
            return cross_with_better(parent1, parent2);
        }

        return cross_with_better(parent2, parent1);
    }

    Chromosome cross_with_better(Chromosome& best, Chromosome& worse){

        Chromosome child = best;
        double a = uniform_distro(engine);

        for(int i = 0; i < best.get_size(); i++){
            child[i] = a * (best[i] - worse[i]) + best[i];
        }
        return child;
    }

private:
    std::default_random_engine engine;
    std::uniform_real_distribution<> uniform_distro;
};
#endif //NEUROEVOLUTION_SELECTION_CROSSOVER_H
