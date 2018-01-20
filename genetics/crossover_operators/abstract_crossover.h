//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_ABSTRACT_CROSSOVER_H
#define NEUROEVOLUTION_ABSTRACT_CROSSOVER_H

#include <stdexcept>
#include "../chromosome.h"

class AbstractCrossover{

public:

    virtual Chromosome crossover(Chromosome& parent1, Chromosome& parent2){
        throw std::runtime_error("Crossover not implemented");
    }

};

#endif //NEUROEVOLUTION_ABSTRACT_CROSSOVER_H
