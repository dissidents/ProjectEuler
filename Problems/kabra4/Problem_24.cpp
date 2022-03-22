//
// Created by akbar on 16/03/2022.
//
#include <algorithm>

class Problem_24 : public Problem {
public:
    int count = 0;

    Problem_24(){
        number = 24; // number is must
        correct = true;
        count = 0;
    }

    void Compute() override {
        string a = "0123456789";
        answer = PermutationString(a);
        // at the end of Compute()
        // declare your result as "answer"
    }

    string PermutationString(string digits, vector<int> positions = {}, int currentLoop = 0){
        vector<int> pos;
        string result;
        for (int i = 0; i < digits.length(); ++i) {
            if (currentLoop != 0){
                if (find(positions.begin(), positions.end(), i) != positions.end())
                    continue;
            }
            pos.clear();
            copy(positions.begin(), positions.end(), back_inserter(pos));
            pos.push_back(i);
            if (currentLoop < 9){
                result += PermutationString(digits, pos, currentLoop + 1);
                pos.clear();
                if (!result.empty())
                    return result;
            } else {
                count++;
                if (count == 1000000){
                    for (int x : pos){
                        result += digits[x];
                    }
                }
                pos.clear();
                return result;
            }
        }
        pos.clear();
        return result;
    }

};