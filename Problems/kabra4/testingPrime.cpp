//
// Created by akbar on 17/03/2022.
//
#include "../Problem.h"
using namespace std;

class TestingPrime : public Problem {
public:
    static string CountPrimes(int number){
        Prime prime;
        return to_string( prime.PrimeList(1000).size());
    }

    void Compute() override {
        answer = CountPrimes(1000);
        // at the end of Compute()
        // declare your result as "answer"
    }
};