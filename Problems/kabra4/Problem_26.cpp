//
// Created by akbar on 16/03/2022.
//

class Problem_26 : public Problem {
public:

    Problem_26(){
        number = 26; // number is must
        correct = true;
    }

    void Compute() override {
        bool cycleFound;
        int remaind;
        int d;
        int a;
        int cycle;
        int maxCycle = 0;
        string result;
        vector<string> results;
        vector<int> remainders;

        for (int i = 2; i < 1000; ++i) {
            cycleFound = false;
            remaind = 1;
            a = 1;

            while (!cycleFound){
                remaind = decimalRemainder(remaind, i);
                if (remaind == 0){
                    break;
                }
                result = getResult(a, i);
                if (find(remainders.begin(), remainders.end(), remaind) != remainders.end()){
                    cycle = getCycleLen(results, remainders, remaind);
                    if (cycle > maxCycle){
                        maxCycle = cycle;
                        d = i;
                    }
                    cycleFound = true;
                } else {
                    results.push_back(result);
                    remainders.push_back(remaind);
                    a = remaind;
                }
            }
            results.clear();
            remainders.clear();
        }

        answer = to_string(d);
        // at the end of Compute()
        // declare your result as "answer"
    }

    static int getCycleLen(vector<string> n, vector<int> r, const int& a){
        int start;
        int result = 0;
        for (int i = 0; i < r.size(); ++i) {
            if (r[i] == a){
                start = i;
                break;
            }
        }
        for (int i = start; i < n.size(); ++i) {
            result += n[i].length();
        }
        return result;
    }

    //                          1       7
    static string getResult(double a , double b){
        int x = (int)floor(log10(b / a));
        string s (x, '0');
        return s + to_string((int)floor(a * pow(10, x+1) / b));
    }
//                                 1       7
    static int decimalRemainder(double a, double b) {
        int x = (int)ceil(log10(b / a));
        return (int)Remainder(a * pow(10, x), b);
    }

    static double Remainder(double a, double b){
        a = abs(a);
        b = abs(b);
        return a - b * floor(a / b);
    }

};