//
// Created by akbar on 16/03/2022.
//
#include <iostream>
#include "string"
using namespace std;

class Problem {
public:
    virtual ~Problem() = default;
    virtual void Compute() = 0;

    string answer;
    int number;
    bool correct;

    static string dtos(double number){
        string s = to_string(number);
        return s.substr(0, s.find('.'));
    }

    static double Remainder(double a, double b){
        a = abs(a);
        b = abs(b);
        return a - b * floor(a / b);
    }
};