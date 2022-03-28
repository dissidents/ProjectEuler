//
// Created by Akbar on 18/03/2022.
//

#include "Kabra4.h"

class Kabra4 : public User{
public:
    Kabra4() {
        id = 0;
        owner = "kabra4";
    }

    void CollectProblems() override {

        problems.push_back(new Problem_1);
        problems.push_back(new Problem_2);
        problems.push_back(new Problem_4);
        problems.push_back(new Problem_21);
        problems.push_back(new Problem_23);
        problems.push_back(new Problem_24);
        problems.push_back(new Problem_25);
        problems.push_back(new Problem_26);
        problems.push_back(new Problem_27);

        problems.push_back(new Problem_0);
    }

};