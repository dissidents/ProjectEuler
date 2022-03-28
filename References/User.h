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
            if (counter < 5){
                str += "\t";
                counter++;
            } else {
                str += "\n";
                counter = 0;
            }
        }
        ClearProblems();

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
        ClearProblems();
        return result;
    };

    void ClearProblems() {
        problems.clear();
        vector<Problem*>().swap(problems);
    }

};


#endif //PROJECTEULER_USER_H
