//
// Created by Legend on 3/17/2022.
// Problem 3. What is the largest prime factor of the number 600851475143?
//

#include "../../References/Problem.h"

#include "cmath"

class Problem_3 : public Problem {
public:
    double num = 600851475143;

    Problem_3(){
        number = 3;
    }

    void Compute() override
    {
        for (int i = floor(sqrt(num)); i > 2; --i) {
            if (isRemainderZero(num, i) && Number::IsPrime(i)) {
                answer = to_string(i);
                break;
            }
        }
    }

    bool isRemainderZero(double a, double b) {
        int remainder;
        double div = a / b;
        div = div - floor(div);
        return div == 0;
    }
};
