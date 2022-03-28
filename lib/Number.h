//
// Created by akbar on 16/03/2022.
//

#include "../References/utils.h"

using namespace std;

class Number {
public:

    static int ReverseNumber(int number){
        // input |int number| : 123450
        // output |int number| : 54321
        string strNumber = to_string(number);
        reverse(strNumber.begin(), strNumber.end());
        vector<char> p;
        bool start = true;
        for (char & i : strNumber) {
            if (start && i == '0')
                continue;
            else {
                p.push_back(i);
                start = false;
            }
        }
        string result(p.begin(), p.end());
        return stoi(result);
    }

    static vector<double> AllFactors_d(double number){
        // input |double number| : 16
        // output |vector<double>|: {1, 2, 4, 8}
        double x = sqrt(number);
        vector<double> result = {1};
        for (auto i = 2; i < x; ++i) {
            if (Remainder(number, i) == 0){
                result.push_back(i);
                result.push_back(number / i);
            }
        }
        if (x == floor(x))
            result.push_back(x);
        sort(result.begin(), result.end());
        return result;
    }

    static vector<int> AllFactors(int number){
        // input |int number| : 16
        // output |vector<int>|: {1, 2, 4, 8}
        double x = sqrt(number);
        vector<int> result = {1};
        for (auto i = 2; i < x; ++i) {
            if (Remainder(number, i) == 0){
                result.push_back(i);
                result.push_back(number / i);
            }
        }
        if (x == floor(x))
            result.push_back((int)x);
        sort(result.begin(), result.end());
        return result;
    }

    static double SumOfVectorInt(const vector<int>& numbers ){
        // input |vector<int>| : {1, 2, 4, 8}
        // output |double|: 15
        double sum = 0;
        for (auto & i : numbers) {
            sum += i;
        }
        return sum;
    }

    static double Remainder(double a, double b){
        // modulo operator " % "
        a = abs(a);
        b = abs(b);
        return a - b * floor(a / b);
    }

    static bool IsPrime(double number){
        if (number < 11)
        {
            if (number == 2 || number == 3)
                return true;
            return (Remainder(number, 3) != 0 && Remainder(number, 2) != 0);
        }
        if (Remainder(number, 2) == 0 || Remainder(number, 3) == 0)
            return false;
        double maxFactor = sqrt(number);
        for (int i = 3; i <= maxFactor; i += 2)
        {
            if (Remainder(number, i) != 0)
            {
                if (i >= maxFactor - 1)
                    return true;
            }
            else
                return false;
        }

        return true;
    }

    // it works till 510000
    static set<int> PrimeList(double number){
        double maxFactor = sqrt(number);
        int allNumbers[(int)number + 1];
        set<int> primes;
        for (int i = 0; i <= number; ++i) {
            allNumbers[i] = i;
        }
        allNumbers[0] = 0;
        allNumbers[1] = 0;
        for (int i = 2; i <= maxFactor; ++i) {
            if (allNumbers[i] == 0)
                continue;
            for (int j = 2; j <= number / i; ++j) {
                allNumbers[i * j] = 0;
            }
        }
        for (auto & i : allNumbers) {
            if (i != 0)
                primes.insert(i);
        }

        return primes;
    }
};