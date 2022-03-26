// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is a guessing game

#include <iostream>
#include <random>

int main() {
    // this function is a guessing game
    int integer;

    // input
    std::cout << "Enter a integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // process & output
    if (integer > 0) {
        std::cout << integer << " is a positive number.";
    } else if (integer == 0) {
        std::cout << integer << " is just a zero.";
    } else if (integer < 0) {
        std::cout << integer << " is a negative number.";
    }
    std::cout << "\nDone." << std::endl;
}
