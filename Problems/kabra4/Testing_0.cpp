//
// Created by Akbar on 23/03/2022.
//
#include "../../References/Problem.h"

class Problem_0 : public Problem {
public:

    Problem_0(){
        number = 0; // number is must
        correct = true;
    }

    void Compute() override {
        answer = to_string(Remainder(0, 4)); // calculated in 4 sec
        // at the end of Compute()
        // declare your result as "answer"
    }


//                                 4       70




};