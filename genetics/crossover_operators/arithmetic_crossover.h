//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_ARITHMETIC_CROSSOVER_H
#define NEUROEVOLUTION_ARITHMETIC_CROSSOVER_H

#include <random>
#include <iostream>
#include "abstract_crossover.h"

class ArithmeticCrossover : public AbstractCrossover{

public:

    ArithmeticCrossover():rng{rd()}{

    }

    Chromosome crossover(Chromosome &parent1, Chromosome &parent2) override {
        std::uniform_real_distribution<double> random_mutat_prob(0.0, 1.0);
        double a = random_mutat_prob(rng);
        Chromosome child = parent1;

        for(int i = 0; i < parent1.get_size(); i++){
            child[i] = a * parent1[i] + (1 - a) * parent2[i];
        }

        return child;
    }

private:
    std::random_device rd;
    std::default_random_engine rng;

};
#endif //NEUROEVOLUTION_ARITHMETIC_CROSSOVER_H
