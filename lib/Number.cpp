//
// Created by akbar on 16/03/2022.
//
#include <string>
#include "cmath"
#include "vector"

using namespace std;

class Number {
public:
    static int Remainder(double divisor, double divident){
        double divident2 = floor(divisor / divident);
        return (int) (divisor - divident2 * divident);
    }

    static int ReverseNumber(int number){
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

    static vector<int> AllFactors(double number){
        vector<int> result;
        for (int i = 2; i <= ceil(sqrt(number)); ++i) {
            if (Remainder(number, i) == 0)
                result.push_back(i);
        }
        return result;
    }
};
