//
// Created by Akbar on 18/03/2022.
//

#include "LegenDaVinci.h"


class LegenDaVinci : public User{
public:

    LegenDaVinci() {
        id = 1;
        owner = "LegenDaVinci";
    }

    void CollectProblems() override {
        problems.push_back(new Problem_3);
        problems.push_back(new Problem_5);
        problems.push_back(new Problem_6);
        problems.push_back(new Problem_7);
        problems.push_back(new Problem_8);
        problems.push_back(new Problem_9);
        problems.push_back(new Problem_10);
        problems.push_back(new Problem_11);
        problems.push_back(new Problem_12);
    }

};