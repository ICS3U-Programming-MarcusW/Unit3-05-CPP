// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program display a month based on your input

#include <iostream>
#include <iomanip>

int main() {
    // this function checks checks what month a user chooses
    int userMonth;

    // input the integer representing a month
    std::cout << "Enter a month as an integer(ex: 1 is January): ";
    std::cin >> userMonth;

    // process & output
    // process - assign each integer to a month
    // output the integer they inputted along with its corresponding month
    switch (userMonth) {
        case 1:
            std::cout << "1 represents January" << std::endl;
            break;
        case 2:
            std::cout << "2 represents February" << std::endl;
            break;
        case 3:
            std::cout << "3 represents March" << std::endl;
            break;
        case 4:
            std::cout << "4 represents April" << std::endl;
            break;
        case 5:
            std::cout << "5 represents May" << std::endl;
            break;
        case 6:
            std::cout << "6 represents June" << std::endl;
            break;
        case 7:
            std::cout << "7 represents July" << std::endl;
            break;
        case 8:
            std::cout << "8 represents August" << std::endl;
            break;
        case 9:
            std::cout << "9 represents September" << std::endl;
            break;
        case static_cast<int>(10):
            std::cout << "10 represents October" << std::endl;
            break;
        case static_cast<int>(11):
            std::cout << "11 represents November" << std::endl;
            break;
        case static_cast<int>(12):
            std::cout << "12 represents December" << std::endl;
            break;
        default:
            std::cout << "Error, " << userMonth <<
            " does not represents a valid month" << std::endl;
    }
}
