//
// Created by akbar on 16/03/2022.
//

class Problem_28 : public Problem {
public:

    Problem_28(){
        number = 28; // number is must
        correct = true;
    }

    void Compute() override {
        double sum = -1;
        const int size = 1001; // always odd number
        auto spiral = new int[size][size];

        int center = (size - 1) / 2;
        int x = center + 1;
        int y = center - 1;

        int step = 0;
        int currentNumber = 2;
        spiral[center][center] = 1;

        for (int i = 2; i < size; ++i) {
            int repeatsInLine = (i == 2 || i == size - 1) ? 3 : 2; // first or last = 3
            for (int line = 0; line < repeatsInLine; ++line) {
                for (int n = 0; n < i; ++n) {
                    x += getX(step);
                    y += getY(step);
                    spiral[y][x] = currentNumber;
                    currentNumber++;
                    //cout << to_string(x) + "\t" + to_string(y)<<endl;
                }
                step++;
            }
        }

        for (int yy = 0; yy < size; ++yy) {
            sum += spiral[yy][yy];
            sum += spiral[yy][size - yy - 1];
        }
        answer += dtos(sum);

        // at the end of Compute()
        // declare your spiral as "answer"
    }

    static int getX(int i) {
        int r = (int) Remainder(i, 4); // 0
        return (int)Remainder(r, 2) * (r - 2) ;
    }

    static int getY(int i) {
        int r = (int) Remainder(i, 4);
        return !(int)Remainder(r, 2) * (1 - r) ;
    }

};