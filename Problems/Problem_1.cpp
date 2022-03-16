//
// Created by akbar on 16/03/2022.
//
#include "Problem_1.h"

class Problem_1 : public Problem {
public:
    string answer;
    int number;

    double sum;

    Problem_1(){
        this->number = 1; // Problem number
        this->sum = 0;
        std::cout << "started ";
    }

    string Compute() override {
        std::cout << "computing... ";
        for (int i = 1; i < 1000; ++i) {
            if (i % 3 == 0 || i % 5 == 0) {
                this->sum += i;
            }
        }

        //this->answer = to_string(sum);

        return to_string(sum);
        // define answer at the end of Compute()
    }

};