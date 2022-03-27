//
// Created by akbar on 16/03/2022.
//

#include <string>
#include <algorithm>
#include "cmath"
#include "vector"
#include "set"

using namespace std;

class Number {
public:

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

    static vector<double> AllFactors_d(double number){
        vector<double> result = {1};
        for (auto i = 2; i <= floor(sqrt(number)); ++i) {
            if (remainder(number, i) == 0){
                result.push_back(i);
                result.push_back(number / i);
            }

        }
        sort(result.begin(), result.end());
        return result;
    }

    static vector<int> AllFactors(int number){
        vector<int> result = {1};
        for (auto i = 2; i <= floor(sqrt(number)); ++i) {
            if (remainder(number, i) == 0){
                result.push_back(i);
                result.push_back(number / i);
            }
        }
        sort(result.begin(), result.end());
        return result;
    }

    static double SumOfVectorInt(const vector<int>& numbers ){
        double sum = 0;
        for (auto & i : numbers) {
            sum += i;
        }
        return sum;
    }

    static double Remainder(double a, double b){
        a = abs(a);
        b = abs(b);
        return a - b * floor(a / b);
    }
};