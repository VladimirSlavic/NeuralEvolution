//
// Created by elrond on 1/17/18.
//

#include "neural_network.h"
#include <math.h>

NeuralNetwork::NeuralNetwork(std::vector<int> layers, int input_size, int output_size) : input_sze{input_size},
                                                                                         output_sze{output_size},
                                                                                         layers_{layers} {

    this->type_two_neurons_count = 0;
    num_of_params = 0;
    //layer_to_neurons[0].reserve(input_size);
    init_layer(0, layers[0]);

    for (int i = 1; i < layers.size(); i++) {
        if (i == 1) {
            this->type_one_neurons_count = layers[i];
            num_of_params += layers[i - 1] * 2 * layers[i];
            init_layer(i, layers[i]);
        } else {
            this->type_two_neurons_count += layers[i];
            num_of_params += layers[i] * (layers[i - 1] + 1); //+1 za bias
            init_layer(i, layers[i]);
        }
    }
}

void NeuralNetwork::init_layer(int layer, int sze) {
    for(int i = 0; i < sze; i++){
        layer_to_neurons[layer].push_back(0);
    }
}

//el može neko objasniti koji su sve ovo parametri u mrezi 2x8x3 (ukupno 59)? Kolko sam skuzio svaki od ovih osam u skrivenom sloju imaju po 4 parametra (w1, w2, s1 i s2), prva dva neurona nemaju parametre i izmedu 8x3 ima 24 težina. To je ukupno 56. Jel dobro gledam i gdje idu još tri?
//Mislim da je to bias
//
//        y = sigm(hW+c)
int NeuralNetwork::number_of_parameters() {
    return num_of_params;
}

double NeuralNetwork::calc_error(Dataset& all_data, std::vector<double> &params) {

    std::vector<std::array<int, 3>> real_outputs = all_data.get_outputs();
    std::vector<std::vector<double>> inputs = all_data.get_inputs();

    double error = 0.0;

    for(int i = 0; i < inputs.size(); i++){
        std::vector<double> output = calc_output(params, inputs[i]);
        error += mse(real_outputs[i], output);
    }

    error = error / real_outputs.size();


    return error;
}

double NeuralNetwork::mse(std::array<int, 3>& real_output, std::vector<double>& output) {
    double sum = 0;

    for(int i = 0; i < output.size(); i++){
        sum += (real_output[i] - output[i])*(real_output[i] - output[i]);
    }

    return sum;
}

std::vector<double> NeuralNetwork::calc_output(std::vector<double> &params, std::vector<double> input) {
    //ako imamo mrezu 2x8x3 onda params je oblika:
    //2x8x2 prvih pretinaca su vezani za prvi skriveni sloj, offset je 4 dakle i*input.size()=2
    int index = 0;
    int consumed_neuron = 0;

    for (; index < input.size(); ++index) {
        layer_to_neurons[0][index] = input[index];
    }

    consumed_neuron += layers_[0];

    int offset = 0;

    for (; index < layers_[1] + consumed_neuron; index++) {
        layer_to_neurons[1][index - consumed_neuron] = calculate_type_one_neuron(layer_to_neurons[0], params, offset);
        offset += input.size() * 2;
    }

    for (int i = 2; i < layers_.size(); i++) {
        consumed_neuron += layers_[i - 1];
        for (; index < layers_[i] + consumed_neuron; index++) {
            layer_to_neurons[i][index - consumed_neuron] = calculate_type_two_neuron(layer_to_neurons[i - 1], params,
                                                                                     offset);
            offset += layers_[i - 1] + 1;
        }
    }


    return layer_to_neurons[layers_.size() - 1];
}

double NeuralNetwork::calculate_type_two_neuron(std::vector<double> &input, std::vector<double> &params, int offset) {
    double sum = 0;
    sum += params[offset]; //bias

    for (int i = 0; i < input.size(); i++) {
        sum += input[i] * params[i + 1 + offset];
    }

    return 1 / (1 + exp(-sum));
}

double NeuralNetwork::calculate_type_one_neuron(std::vector<double> &input, std::vector<double> &params, int offset) {
    double sum = 0;

    for (int i = 0; i < input.size(); i++) {
        sum += fabs(input[i] - params[2 * i + offset]) / fabs(params[2 * i + 1 + offset]);
    }
    return 1.0 / (1.0 + sum);
}
