//
// Created by Legend on 3/18/2022.
//

class Problem_5 : public Problem{
public:
    int add = 0;
    int num = 1;
    int den = 1;

    //
    Problem_5()
    {
        number = 5; // number is must
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
        answer = to_string(num); //232792560
    }
};