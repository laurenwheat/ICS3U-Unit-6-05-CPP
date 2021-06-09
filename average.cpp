// Copyright Lauren Wheatley
//
// Created by Lauren Wheatley
// Created on June 2021
// This program finds the smallest number of 10 random numbers

#include <iostream>
#include <cmath>
#include <list>
#include <string>

float avg(std::list<int> listOfMarks) {
    float sum = 0;
    float avgValue;
    float numbers = listOfMarks.size();
    float avgRounded;

    for (int numbers : listOfMarks) {
        sum += numbers;
    }

    avgValue = sum / numbers;

    avgRounded = avgValue * pow(10, 0) + 0.5;
    avgRounded = static_cast<int>(avgRounded);
    avgRounded = avgRounded / pow(10, 0);

    return avgRounded;
}


int main() {
    std::list<int> listOfMarks;
    float avgValue;
    std::string marks;
    int a_single_mark;

    while (true) {
        std::cout << "Enter a mark (%): ";
        std::cin >> marks;
        try {
            a_single_mark = std::stoi(marks);
            if (a_single_mark < 0) {
                if (a_single_mark == -1) {
                    break;
                }
            }
        listOfMarks.push_back(a_single_mark);
        } catch (std::invalid_argument) {
            std::cout << "Invalid input!!" << std::endl;
        }
    }
    avgValue = avg(listOfMarks);

    std::cout << "The average is: " << avgValue << "%" << std::endl;
}
