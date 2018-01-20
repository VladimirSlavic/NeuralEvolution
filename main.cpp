#include <iostream>
#include <array>
#include "data/dataset.h"
#include "evolution_engine/engine.h"
#include <algorithm>

struct Comparison {
    bool const operator()(Chromosome lhs, Chromosome rhs) const {
        return (lhs.fitness) < (rhs.fitness);
    }
};

void create_perfect_chromo(Dataset &d) {

    std::vector<double> parameters;

    parameters.push_back(0.125);
    parameters.push_back(0.125);
    parameters.push_back(0.75);
    parameters.push_back(0.25);

    parameters.push_back(0.37);
    parameters.push_back(0.125);
    parameters.push_back(0.75);
    parameters.push_back(0.25);

    parameters.push_back(0.63);
    parameters.push_back(0.125);
    parameters.push_back(0.75);
    parameters.push_back(0.25);

    parameters.push_back(0.88);
    parameters.push_back(0.125);
    parameters.push_back(0.75);
    parameters.push_back(0.25);

    parameters.push_back(0.125);
    parameters.push_back(0.125);
    parameters.push_back(0.25);
    parameters.push_back(0.25);

    parameters.push_back(0.37);
    parameters.push_back(0.125);
    parameters.push_back(0.25);
    parameters.push_back(0.25);

    parameters.push_back(0.63);
    parameters.push_back(0.125);
    parameters.push_back(0.25);
    parameters.push_back(0.25);

    parameters.push_back(0.88);
    parameters.push_back(0.125);
    parameters.push_back(0.25);
    parameters.push_back(0.25);


    for (int i = 32; i < 59; i++) {
        parameters.push_back(0);
    }

    for (int i = 32; i < 59; i += 8) {
        parameters[i] = 0;
    }

    parameters[33] = -66.0;
    parameters[34] = -66.0;
    parameters[35] = 100.0;
    parameters[36] = -66.0;
    parameters[37] = 100.0;
    parameters[38] = -66.0;
    parameters[39] = -66.0;
    parameters[40] = 100.0;
    parameters[41] = 0.0;
    parameters[42] = 100.0;
    parameters[43] = -66.0;
    parameters[44] = -66.0;
    parameters[45] = 100.0;
    parameters[46] = -66.0;
    parameters[47] = 100.0;
    parameters[48] = -66.0;
    parameters[49] = -66.0;
    parameters[50] = 0.0;
    parameters[51] = -50.0;
    parameters[52] = 100.0;
    parameters[53] = -50.0;
    parameters[54] = -50.0;
    parameters[55] = -50.0;
    parameters[56] = -50.0;
    parameters[57] = 100.0;
    parameters[58] = -50.0;


    NeuralNetwork network{std::vector<int>{2, 8, 4, 3}, 2, 3};//0.50.80.009 //0.80.80.007
    std::vector<double> outpu = network.calc_output(parameters, d.get_inputs()[0]);
    double err = network.calc_error(d, parameters);
    std::cout << "error je " << err << std::endl;

    std::cout << "aaaaaaaaaaa" << std::endl;

}

int main() {

    Dataset dataset{};

    //create_perfect_chromo(dataset);
    //Engine(int pop_sze, std::string mutation_typ, std::string crossover_typ, NeuralNetwork& network_, double mut_prob, Dataset& dataset);
    std::vector<double> muttations{0.007, 0.009, 0.02, 0.04};
    std::vector<double> sigones{0.15, 0.50, 0.80, 1.0, 1.5};
    std::vector<double> sigtwos{0.15, 0.50, 0.80, 1.0, 1.5, 2.0};

    NeuralNetwork network{std::vector<int>{2, 8, 4, 3}, 2, 3};//0.80.80.007 //0.50.80.009
    Engine engine{80, "add", "arithmetic", network, 0.007, dataset, 0.8, 0.8};
    engine.start_engine(1000000);

    return 0;
}