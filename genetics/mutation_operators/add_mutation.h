//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_ADD_MUTATION_H
#define NEUROEVOLUTION_ADD_MUTATION_H

#include "abstract_mutation.h"

class AddMutator : public AbstractMutator {

public:

    AddMutator(double sigma1, double sigma2):AbstractMutator(sigma1, sigma2),  rng{rd()}{

    }

    void mutate(Chromosome &child, double probability) override {
        std::normal_distribution<double> gaus_mutat(0.0,get_sig1());
        std::uniform_real_distribution<double> random_mutat_prob(0.0, 1.0);

        for (int i = 0; i < child.get_size(); i++) {
            bool pass_ = random_mutat_prob(rng) <= probability;
            if (pass_) {
                double factor = gaus_mutat(rng);
                child[i] += factor * get_sig1();
            }
        }
    }

private:
    std::random_device rd;
    std::default_random_engine rng;

};

#endif //NEUROEVOLUTION_ADD_MUTATION_H
