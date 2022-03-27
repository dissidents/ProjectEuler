//
// Created by Akbar on 23/03/2022.
//
#include "../../Problem.h"

class Problem_0 : public Problem {
public:

    Problem_0(){
        number = 0; // number is must
        correct = true;
    }

    void Compute() override {
        string s = to_string(decimalRemainder(6, 7));
        answer = s + "\n" ; // calculated in 4 sec
        // at the end of Compute()
        // declare your result as "answer"
    }

    static string getResult(double a, double b){
        int x = (int)floor(log10(b / a));
        string s (x, '0');
        return s + to_string((int)floor(a * pow(10, x+1) / b));
    }
    static int decimalRemainder(double a, double b) {
        int x = (int)ceil(log10(b / a));
        return (int)Remainder(a * pow(10, x), b);
    }

    static double Remainder(double a, double b){
        return a - b * floor(a / b);
    }
//                                 4       70




};