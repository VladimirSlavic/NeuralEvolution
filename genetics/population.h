//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_POPULATION_H
#define NEUROEVOLUTION_POPULATION_H

#include <random>
#include <algorithm>
#include <iostream>
#include "chromosome.h"
#include "../sorter/mem_comparer.h"
/**
 * Two types of mutations and three types of crossover
 */
class Population {

public:
    Population(int population_size, int num_of_params, std::vector<int> &layers);

    std::vector<int> selection();

    Chromosome &operator[](int n) { return chromosomes[n]; }

    int get_size(){ return chromosomes.size(); }

    struct Comparison
    {
        bool const operator()(Chromosome lhs, Chromosome rhs) const
        {
            return (lhs.fitness) < (rhs.fitness);
        }
    };

    void sort(){
        std::sort(chromosomes.begin(), chromosomes.end(), Comparison());
    }

private:
    std::vector<Chromosome> chromosomes;
    std::default_random_engine engine;
    std::uniform_int_distribution<> uniform_distro;
};


#endif //NEUROEVOLUTION_POPULATION_H
