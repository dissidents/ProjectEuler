//
// Created by Legend on 3/18/2022.
//

#include "../../Problem.h"

class Problem_6 : public Problem{
public:
    double sumOfSquare = 0;
    double squareOfSum = 0;

    //
    Problem_6()
    {
        number = 6; // number is must
    }

    void Compute() override
    {
        for (int i = 1; i < 101; ++i){
            sumOfSquare += pow(i,2);
        }
        for (int j = 1; j < 101; ++j){
            squareOfSum += j;
        }
        squareOfSum = pow(squareOfSum,2);
        answer = to_string(int(squareOfSum-sumOfSquare));
    }

};