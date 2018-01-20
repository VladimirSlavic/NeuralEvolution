//
// Created by elrond on 1/17/18.
//

#include "chromosome.h"
#include <random>
#include <sstream>

std::default_random_engine generator;
std::uniform_real_distribution<double> distribution(-1.0, 1.0);
std::normal_distribution<double> distribution_after(-100.0, 100.0);

Chromosome::Chromosome(int num_of_params, std::vector<int> &layers) {

    for(int i = 0; i < num_of_params; i++){
        genes.push_back(distribution(generator));
    }

    fitness = 0.0;
}

Chromosome &Chromosome::operator=(const Chromosome &other) {

    if(&other == this) return *this;

    genes = other.genes;
    fitness = other.fitness;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Chromosome &chromosome) {
    std::ostringstream stt{""};
    for(double d : chromosome.genes){
        stt << d << ", ";
    }
    os << "genes: " << stt.str();
    return os;
}


