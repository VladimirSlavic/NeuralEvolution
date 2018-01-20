cmake_minimum_required(VERSION 3.7)
project(NeuroEvolution)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp neural/neural_network.cpp neural/neural_network.h data/dataset.h genetics/chromosome.cpp genetics/chromosome.h genetics/population.cpp genetics/population.h genetics/crossover_operators/abstract_crossover.h genetics/mutation_operators/abstract_mutation.h genetics/crossover_operators/uniform_crossover.h genetics/mutation_operators/add_mutation.h genetics/mutation_operators/switch_mutation.h evolution_engine/engine.cpp evolution_engine/engine.h genetics/crossover_operators/arithmetic_crossover.h genetics/crossover_operators/selection_crossover.h)
add_executable(NeuroEvolution ${SOURCE_FILES})