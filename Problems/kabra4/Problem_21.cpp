//
// Created by akbar on 16/03/2022.
//
#include "../../Problem.h"
#include "set"

class Problem_21 : public Problem {
public:

    Problem_21(){
        number = 21; // number is must
        correct = true;
    }

    void Compute() override {
        set<int> amicables;
        double amicableSum = 0;
        double b;
        double x;
        for (int a = 10; a < 10000; ++a) {
            if (Prime::IsPrime(a))
                continue;
            b = Number::SumOfVectorInt(Number::AllFactors(a));
            if (Prime::IsPrime((int)b) || a == b)
                continue;
            x = Number::SumOfVectorInt(Number::AllFactors((int)b));
            if (a == x) {
                amicables.insert((int)a);
                amicables.insert((int)b);
            }
        }
        for (auto & i : amicables) {
            amicableSum += i;
        }
        answer = to_string(amicableSum);
        // at the end of Compute()
        // declare your result as "answer"
    }



};