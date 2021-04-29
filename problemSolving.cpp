// Copyright (c) 2021 Austin de Mora All rights reserved
//
// Created by: Austin de Mora
// Created on: April 2021
// This program calculates the total of 2 numbers

#include <cmath>
#include <iostream>


int main() {
    // this function calculates the total of 2 numbers
    int a;
    int b;
    int total;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    // process
    total = a + b;

    // output
    std::cout << "" << std::endl;
    std::cout << "The total of both numbers is:  " << total << std::endl;
}
