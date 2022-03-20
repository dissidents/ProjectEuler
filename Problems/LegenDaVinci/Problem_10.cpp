//
// Created by Legend on 3/20/2022.
//

#include "../../Problem.h"
using namespace std;

class Problem_10 : public Problem {
public:
    //
    Problem_10() {
        number = 10; // number is must
    }

    void Compute() override
    {
        double sum = 0;
        for (int i = 2; i < 2000000; i++) {
            Prime prime;
            if (prime.IsPrime(i)) {
                sum += i;
            }
        }
        string ans = to_string(sum);
        answer = (Strings::split(ans, ".")[0]);
    }
};