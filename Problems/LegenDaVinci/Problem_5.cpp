//
// Created by Legend on 3/18/2022.
// Problem 5. What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//

class Problem_5 : public Problem{
public:
    int add = 0;
    int num = 1;
    int den = 1;
    
    Problem_5()
    {
        number = 5;
    }

    void Compute() override
    {
        while (den < 20)
        {
            if (num % den == 0)
            {
                num += 0;
                den += 1;
                add = num;
            } else {
                num += add;
            }
        }
        answer = to_string(num);
    }
};
