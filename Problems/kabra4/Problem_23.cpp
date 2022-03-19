//
// Created by akbar on 16/03/2022.
//
#include "../../Problem.h"

class Problem_23 : public Problem {
public:

    Problem_23(){
        number = 23; // number is must
        correct = false;
    }

    void Compute() override {
        set<int> allNumbers;
        for (int i = 1; i < 28124; ++i)
            allNumbers.insert(i);

        set<int> abundants;
        for (int i = 12; i < 28112; ++i) {
            if (Prime::IsPrime(i)) continue;
            if (Number::SumOfVectorInt(Number::AllFactors(i)) > i ){
                abundants.insert(i);
            }
        }
        double sum = 0;
        for (auto & i : abundants) {
            for (auto & j : abundants) {
                if (i + j > 28123) break;
                allNumbers.erase(i+j);
            }
        }
        for (auto & i : allNumbers) {
            sum += i;
        }

        answer = to_string(sum) + " false";
        // at the end of Compute()
        // declare your result as "answer"
    }

};