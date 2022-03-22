//
// Created by akbar on 16/03/2022.
//

class Problem_25 : public Problem {
public:

    Problem_25(){
        number = 25; // number is must
        correct = true;
    }

    void Compute() override {
        int index = 2;
        bigint a = 1;
        bigint b = 1;
        bigint res = 1;
        while (res.size() < 1000){
            res = a + b;
            a = b;
            b = res;
            index++;
        }

        answer = to_string(index);
        // at the end of Compute()
        // declare your result as "answer"
    }

};