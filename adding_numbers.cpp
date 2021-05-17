// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program adds positive integers and uses a continue statement

#include <iostream>
#include <string>

int main() {
    // This function adds the  numbers
    std::string numberAsString;
    int numberAsInteger;
    std::string enteredIntegersString;
    int enteredIntegersInteger;
    int loopCounter = 0;
    int answer = 0;

    // Input
    std::cout << "This program adds together positive integers." << std::endl;
    std::cout << "Enter the number of integers you would like to add: ";
    std::cin >> numberAsString;

    // Process & Output
    while (true) {
        try {
            numberAsInteger = std::stoi(numberAsString);

            std::cout << "" << std::endl;
            break;
        } catch (std::invalid_argument) {
                std::cout << numberAsString << " is not a valid input. Enter "
                    "the number of integers you would like to add: ";
                std::cin >> numberAsString;
        }
    }
    for (loopCounter = 0; loopCounter < numberAsInteger; loopCounter++) {
        std::cout << "Enter an integer to add: ";
        std::cin >> enteredIntegersString;
        try {
            enteredIntegersInteger = std::stoi(enteredIntegersString);

            if (enteredIntegersInteger < 0) {
                continue;
            } else {
                answer = answer + enteredIntegersInteger;
            }
        } catch (std::invalid_argument) {
                std::cout << "Invalid input." <<std::endl;
        }
    }
    std::cout << "" << std::endl;
    std::cout << "The sum of all the positive integers is: " << answer
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
