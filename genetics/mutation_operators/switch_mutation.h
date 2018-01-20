//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_SWITCH_MUTATION_H
#define NEUROEVOLUTION_SWITCH_MUTATION_H

#include "abstract_mutation.h"

class SwitchMutator : public AbstractMutator{

public:
    SwitchMutator(double sigma1, double sigma2):AbstractMutator(sigma1, sigma2),  rng{rd()}{

    }

    void mutate(Chromosome &child, double probability) override {

        std::normal_distribution<double> gaus_mutat(0.0,get_sig2());
        std::uniform_real_distribution<double> random_mutat_prob(0.0, 1.0);

        for (int i = 0; i < child.get_size(); i++) {
            if (random_mutat_prob(rng) <= probability) {
                double factor = gaus_mutat(rng);
                child[i] = factor * get_sig2();
            }
        }
    }

private:
    std::random_device rd;
    std::default_random_engine rng;
};

#endif //NEUROEVOLUTION_SWITCH_MUTATION_H
