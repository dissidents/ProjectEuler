//
// Created by Akbar on 23/03/2022.
//
#include "../../Problem.h"

class Problem_0 : public Problem {
public:

    Problem_0(){
        number = 0; // number is must
        correct = true;
    }

    void Compute() override {
        auto a = Number::AllFactors(16);
        for (auto & i : a)
            answer += to_string(i) + "\t";
        answer; // calculated in 4 sec
        // at the end of Compute()
        // declare your result as "answer"
    }


//                                 4       70




};