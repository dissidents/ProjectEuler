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

    string PermutationString(string& digits, vector<int> positions = {}, int currentLoop = 0){
        vector<int> pos;
        string result;

        for (int i = 0; i < 10; ++i) {
            for (auto & b : positions) {
                if (b == i)
                    continue;
            }
            pos = {};
            copy(begin(positions), end(positions), begin(pos));
            pos.push_back(i);
            if (currentLoop < 9){
                result = PermutationString(digits, pos, currentLoop + 1);
                pos.clear();
                if (!result.empty())
                    return result;
            } else {
                count++;
                if (count == 1000000){
                    for (int x : positions){
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

    string FuckingFunction(){
        string digits = "0123456789";
        string result;
        set<int> positions = {};
        int count = 0;
        for (int a = 0; a < 10; ++a) {
            for (int b = 0; b < 10; ++b) {
                for (int c = 0; c < 10; ++c) {
                    for (int d = 0; d < 10; ++d) {
                        for (int e = 0; e < 10; ++e) {
                            for (int f = 0; f < 10; ++f) {
                                for (int g = 0; g < 10; ++g) {
                                    for (int h = 0; h < 10; ++h) {
                                        for (int i = 0; i < 10; ++i) {
                                            for (int j = 0; j < 10; ++j) {
                                                positions = {a, b, c, d, e, f, g, h, i, j};
                                                if (positions.size() < 10)
                                                    continue;
                                                count++;
                                                if (count == 1000000){
                                                    for (int x : positions){
                                                        result += digits[x];
                                                        return result;
                                                    }
                                                }

                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return "not found";
    }

};