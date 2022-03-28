//
// Created by akbar on 16/03/2022.
//

class Problem_27 : public Problem {
public:

    Problem_27(){
        number = 27; // number is must
        correct = true;
    }

    void Compute() override {
        int product = 0;
        int x, y;
        int primes;
        int maxPrimes = 0;
        for (int a = -1000; a <= 1000; ++a) {
            for (int b = -1000; b <= 1000; ++b) {
                primes = QuadraticLen(a, b);
                if (maxPrimes < primes){
                    maxPrimes = primes;
                    product = a * b;
                }
            }
        }
//        product = QuadraticLen(-79, 1601);


        answer = to_string(product) + "\n" + to_string(maxPrimes);
        // at the end of Compute()
        // declare your result as "answer"
    }

    static int QuadraticLen(int a, int b){
        int n = 0;
        bool stopped = false;
        while (!stopped) {
            stopped = !Number::IsPrime(abs(n*n + a*n + b));
            n++;
        }
        return n - 1;
    }

};