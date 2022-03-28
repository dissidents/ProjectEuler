//
// Created by Legend on 3/19/2022.
//

#include "../../References/Problem.h"
using namespace std;

class Problem_9 : public Problem {
public:
    //
    Problem_9() {
        number = 9; // number is must
    }

    void Compute() override
    {
        for (int a = 0; a < 333; a++){
            for (int b = 0; b < 666; b++){
                for (int c = 0; c < 1000; c++){
                    if ((a*a + b*b == c*c) && ((a + b + c) == 1000)) {
                        answer = std::to_string(a * b *c);
                    }
                }
            }
        }
    }
};