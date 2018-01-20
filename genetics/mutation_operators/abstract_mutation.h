//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_ABSTRACT_MUTATION_H
#define NEUROEVOLUTION_ABSTRACT_MUTATION_H

#include <stdexcept>
#include <random>
#include "../chromosome.h"


class AbstractMutator{
public:

    AbstractMutator(double sigma1, double sigma2) : sig1{sigma1}, sig2{sigma2}{}

    virtual void mutate(Chromosome& child, double probability){
        throw std::runtime_error("Mutation not implemented");
    }

    double get_sig1() const {
        return sig1;
    }

    double get_sig2() const {
        return sig2;
    }

protected:
    double sig1;
    double sig2;
};

#endif //NEUROEVOLUTION_ABSTRACT_MUTATION_H
