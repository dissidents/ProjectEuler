//
// Created by Legend on 3/17/2022.
//
#include "../../Problem.h"

#include "cmath"

class Problem_3 : public Problem {
public:
    double num = 600851475143;

    //
    Problem_3(){
        number = 3; // number is must
    }

    void Compute() override
    {
        Prime prime;
        for (int i = floor(sqrt(num)); i > 2; --i) {
            if (isRemainderZero(num, i) && prime.IsPrime(i)) {
                answer = to_string(i);
                break;
            }
        }
        // at the end of Compute()
        // declare your result as "answer"
    }

    bool isRemainderZero(double a, double b) {
        int remainder;
        double div = a / b;
        div = div - floor(div);
        return div == 0;
    }

};
