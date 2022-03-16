//
// Created by akbar on 16/03/2022.
//
#include <iostream>
using namespace std;

class Problem {
public:
    virtual ~Problem() = default;;
    virtual string Compute() = 0;
    string answer;
    int number;
};