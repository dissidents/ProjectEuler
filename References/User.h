//
// Created by Akbar on 18/03/2022.
//

#ifndef PROJECTEULER_USER_H
#define PROJECTEULER_USER_H

#include "Problem.h"

using namespace std;

struct User {
    string owner;
    int id;
    vector<Problem*> problems;

    virtual ~User() = default;
    virtual void CollectProblems() = 0;


    void ListSolved() {
        CollectProblems();
        string str = "User " + owner + "'s solved problems:\n";

        int counter = 0;
        for (auto & i : problems) {
            str += to_string(i->number);
            if (counter < 4){
                str += "\t";
                counter++;
            } else {
                str += "\n";
                counter = 0;
            }
        }
        problems.clear();
        cout << str << endl;
    };


    Problem* GetProblem(int number) {
        Problem* result;
        CollectProblems();
        for (auto & i : problems) {
            if (i->number == number){
                result = i;
                break;
            }
        }
        problems.clear();
        return result;
    };

};


#endif //PROJECTEULER_USER_H
