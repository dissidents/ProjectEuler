//
// Created by Legend on 3/18/2022.
//

#include "../../References/Problem.h"

class Problem_7 : public Problem {
public:


    //
    Problem_7() {
        number = 7; // number is must
    }

    void Compute() override
    {
        int i = 0;
        int num = 2;

        while (i < 10001) {
            if (Number::IsPrime(num))
            {
                ++i;
            }
            ++num;
        }
        answer = to_string(num-1);
    }
};

