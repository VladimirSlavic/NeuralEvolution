//
// Created by elrond on 1/17/18.
//

#include <functional>
#include "population.h"

Population::Population(int population_size, int num_of_params, std::vector<int> &layers) : uniform_distro{0,population_size - 1} {
    for(int i = 0; i < population_size; i++){
        chromosomes.push_back(Chromosome{num_of_params, layers});//int num_of_params, std::vector<int> &layers
    }
    engine.seed(time(0));
}

std::vector<int> Population::selection() {

    int chromo_first = rand() % chromosomes.size();//uniform_distro(engine);
    int chromo_second = rand() % chromosomes.size();//uniform_distro(engine);

    while(chromo_second == chromo_first){
        chromo_second = rand() % chromosomes.size();//uniform_distro(engine);
    }

    int chromo_third = uniform_distro(engine);

    while(chromo_third == chromo_first || chromo_third == chromo_second){
        chromo_third = rand() % chromosomes.size();//uniform_distro(engine);
    }

    return std::vector<int>{chromo_first, chromo_second, chromo_third};
}
