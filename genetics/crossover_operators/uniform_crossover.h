//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_UNIFORM_CROSSOVER_H
#define NEUROEVOLUTION_UNIFORM_CROSSOVER_H
#include "abstract_crossover.h"
#include "../mutation_operators/abstract_mutation.h"

class UniformCrossover : public AbstractCrossover{

public:
    Chromosome crossover(Chromosome& parent1, Chromosome& parent2) override {
        Chromosome child = parent1;

        std::random_device rd;
        std::default_random_engine rng(rd());
        std::normal_distribution<double> gaus_mutat(0.0,1.0);
        std::uniform_real_distribution<double> random_mutat_prob(0.0, 1.0);

        for(int i = 0; i < child.get_size(); i++){
            if(random_mutat_prob(rng) >= 0.5){
                child[i] = parent2[i];
            }
        }

        return child;
    }

};
#endif //NEUROEVOLUTION_UNIFORM_CROSSOVER_H
