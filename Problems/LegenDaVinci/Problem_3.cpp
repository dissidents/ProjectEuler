//
// Created by Legend on 3/17/2022.
//
#include "../Problem.h"

class Problem_3 : public Problem {
public:
    double sum = 0;

    //
    Problem_3(){
        number = 3; // number is must
    }

    void Compute() override {
        for (int i = 1; i < 1000; ++i) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }

        answer = to_string((int)sum);
        answer = to_string(3);
        // at the end of Compute()
        // declare your result as "answer"
    }

};
