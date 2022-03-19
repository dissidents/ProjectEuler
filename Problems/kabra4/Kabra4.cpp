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
    }

};