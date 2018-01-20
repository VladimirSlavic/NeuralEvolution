//
// Created by elrond on 1/17/18.
//

#ifndef NEUROEVOLUTION_NEURAL_NETWORK_H
#define NEUROEVOLUTION_NEURAL_NETWORK_H


#include <vector>
#include <unordered_map>
#include "../data/dataset.h"

class NeuralNetwork {

public:

    NeuralNetwork(std::vector<int> layers, int input_size, int output_size);

    int number_of_parameters();

    int type_one_count() { return type_one_neurons_count; }

    int type_two_count() { return type_two_neurons_count; }

    std::vector<int> &get_layers() { return layers_; }

    double calc_error(Dataset &all_data, std::vector<double> &params);

    std::vector<double> calc_output(std::vector<double> &params, std::vector<double> input);

private:

    void init_layer(int layer, int sze);

    double calculate_type_two_neuron(std::vector<double> &input, std::vector<double> &params, int offset);

    double calculate_type_one_neuron(std::vector<double> &input, std::vector<double> &params, int offset);


    double mse(std::array<int, 3> &real_output, std::vector<double> &output);

private:
    //polje double-ova za pohranu koje ima broj elemenata koliko ima neurona: to polje koristit za pohranu izlaza neurona i istovremeno za ulaz u iduci sloj
    int type_one_neurons_count;
    int type_two_neurons_count;
    int input_sze;
    int output_sze;
    int num_of_params;
    std::unordered_map<int, std::vector<double>> layer_to_neurons;
    std::vector<int> layers_;
};


#endif //NEUROEVOLUTION_NEURAL_NETWORK_H
