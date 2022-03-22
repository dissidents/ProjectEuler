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
        set<string> a = Strings::PermutateString("012345678");

        answer = to_string(a.size()); // calculated in 4 sec
        // at the end of Compute()
        // declare your result as "answer"
    }

};