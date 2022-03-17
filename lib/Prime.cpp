//
// Created by akbar on 16/03/2022.
//
#include "cmath"
#include "vector"

class Prime {
public:
    static int CountPrime(double number){
        int count = 0;
        for (int i = 2; i < number; ++i) {
            if (IsPrime(i))
                count++;
        }
        return count;
    }

    static bool IsPrime(int number){
        if (number < 11)
        {
            if (number == 2 || number == 3)
                return true;
            return (number % 3 != 0 && number % 2 != 0);
        }
        if (number % 2 == 0 || number % 3 == 0)
            return false;
        int maxFactor = ceil(sqrt(number));
        for (int i = 3; i <= maxFactor; i += 2)
        {
            if (number % i != 0)
            {
                if (i >= maxFactor - 1)
                    return true;
            }
            else
                return false;
        }

        return true;
    }

    // for now its giving wrong result
    // don't use it
    static std::vector<int> PrimeList(int number){
        int maxFactor = ceil(sqrt(number));
        int allNumbers[number + 1];
        std::vector<int> primes;
        for (int i = 0; i <= number; ++i) {
            allNumbers[i] = i;
        }
        allNumbers[0] = 0;
        allNumbers[1] = 0;
        for (int i = 2; i <= maxFactor; ++i) {
            for (int j = 2; j <= maxFactor; ++j) {
                allNumbers[i * j] = 0;
            }
        }
        for (auto & i : allNumbers) {
            if (i != 0)
                primes.push_back(i);
        }

        return primes;
    }
};