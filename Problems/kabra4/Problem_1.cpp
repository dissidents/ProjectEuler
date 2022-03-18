//
// Created by akbar on 16/03/2022.
//
#include "../Problem.h"

class Problem_1 : public Problem {
public:
    double sum = 0;

    //
    Problem_1(){
        number = 1; // number is must
    }

    void Compute() override {
        for (int i = 1; i < 1000; ++i) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }

        answer = to_string((int)sum);
        // at the end of Compute()
        // declare your result as "answer"
    }

};