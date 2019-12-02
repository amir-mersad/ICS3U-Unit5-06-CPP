// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program calculates the volume of a cylinder

#include <iostream>
#include <iomanip>
#include <cmath>


float rounding(float &number, float &times, float &result) {
    // Process
    result = number * pow(10, times);
    result = result + 0.5;
    result = result / pow(10, times);
}


main() {
    // This function gets the input and calls another function
    std::string number_str;
    std::string times_str;
    float number = 0;
    float times = 0;
    float result = 0;

    // Input
    std::cout << "What's the number that you want to round? ";
    std::cin >> number_str;
    std::cout << "Which decimal do you want to round? ";
    std::cin >> times_str;
    try {
        number = std::stof(number_str);
        times = std::stoi(times_str);
    } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
        return 0;
    }

    // pass it to the other function
    rounding(number, times, result);

    // Output
    std::cout << result << std::endl;
}
