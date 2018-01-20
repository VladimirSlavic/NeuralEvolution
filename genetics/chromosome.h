//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_CHROMOSOME_H
#define NEUROEVOLUTION_CHROMOSOME_H


#include <vector>
#include <ostream>

class Chromosome {

public:
    Chromosome(int num_of_params, std::vector<int>& layers);

    double get_fitness() const{ return fitness; }

    void set_fitness(double fitness_){ fitness = fitness_; }

    double& operator[](int n){ return genes[n]; }

    Chromosome& operator=(const Chromosome& other);

    int get_size(){ return genes.size(); }

    std::vector<double>& get_genes(){ return genes; }

    bool operator==(const Chromosome& other) const{
        return other.fitness == fitness && genes == other.genes;
    }

    void set_genes(std::vector<double>& gnn){
        genes = gnn;
    }

    bool operator < (const Chromosome& other) const
    {
        return (fitness < other.fitness);
    }

    friend std::ostream &operator<<(std::ostream &os, const Chromosome &chromosome);

public:
    double fitness;

private:
    //equivalent to parameters in neural net
    //[w1, s1, w2, s2.....]
    std::vector<double> genes;



};


#endif //NEUROEVOLUTION_CHROMOSOME_H
