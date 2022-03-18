//
// Created by akbar on 18/03/2022.
//

#include "LegenDaVinci.h"

class LegenDaVinci : public Controller{
public:

    LegenDaVinci() {
        id = 1;
        owner = "LegenDaVinci";
    }

    void CollectProblems() override {
        problems.push_back(new Problem_3);
    }

};