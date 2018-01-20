//
// Created by elrond on 1/17/18.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>

#ifndef NEUROEVOLUTION_DATASET_H
#define NEUROEVOLUTION_DATASET_H

class Dataset {
public:
    Dataset(std::string file_name = "/home/elrond/Downloads/zad7-dataset.txt") {
        std::ifstream input_file;
        input_file.open(file_name);

        if (!input_file.is_open()) throw std::exception();

        std::string line;
        int first, second, third;
        double x, y_;

        while (getline(input_file, line)) {
            std::istringstream stream{line};
            stream >> x >> y_ >> first >> second >> third;
            X.push_back(std::vector<double>{x, y_});
            y.push_back(std::array<int, 3>{first, second, third});
        }

    }

    std::vector<std::vector<double>> get_inputs() { return X; }

    std::vector<std::array<int, 3>> get_outputs() { return y; }

    int dataset_size(){
        return X.size();
    }

private:
    std::vector<std::vector<double>> X;
    std::vector<std::array<int, 3>> y;
};

#endif //NEUROEVOLUTION_DATASET_H
