//
// Created by akbar on 16/03/2022.
//
#include <filesystem>
#include <vector>

#include "problem_ref.h"

using namespace std;

class Problems {
public:
    vector<shared_ptr<Problem>> arr;

    Problems() {
        //  -> here add your Problem <-
        this->arr = {
                    make_shared<Problem_1>(),
                    //make_shared<Problem_2>(),
        };

    }

};