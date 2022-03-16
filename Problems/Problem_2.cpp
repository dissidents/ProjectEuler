//
// Created by akbar on 16/03/2022.
//
#include "vector"

#include "Problem_2.h"

class Problem_2 : public Problem {
public:
    string answer;
    int number;
    int lastFibonacci;

    double sum;
    vector<int> fArr;

    Problem_2(){
        number = 2;
        fArr.push_back(1);
        fArr.push_back(2);
        lastFibonacci = 3;
    }

    string Compute() override {

        while (lastFibonacci < 4000000){
            fArr.push_back(lastFibonacci);
            lastFibonacci = fArr.back() + fArr[fArr.size()-2];
        }

        for (auto &number : fArr) {
            if (number % 2 == 0){
                sum += number;
            }
        }
        answer = to_string(sum);
        return answer;
    }

};