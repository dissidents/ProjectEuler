//
// Created by Akbar on 17/03/2022.
//

class Problem_4 : public Problem {
public:

    Problem_4(){
        number = 4; // number is must
        correct = true;
    }

    void Compute() override {

        vector<int> primes = Prime::PrimeList(510000);

        answer = to_string(primes.size());
        // at the end of Compute()
        // declare your result as "answer"
    }

};