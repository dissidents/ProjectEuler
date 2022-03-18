//
// Created by Akbar on 18/03/2022.
//
#include "../Problem.h"
#include "vector"
#include "string"

using namespace std;

class User {
public:
    string owner;
    int id;
    vector<Problem*> problems;

    virtual ~User() = default;
    virtual void CollectProblems() = 0;


    void ListSolved() {
        // not completed
        CollectProblems();
        string str = "User " + owner + "'s solved problems:\n";

        int counter = 0;
        for (auto & i : problems) {
            if (i->correct){
                str += to_string(i->number);
                if (counter < 4){
                    str += "\t";
                    counter++;
                } else {
                    str += "\n";
                    counter = 0;
                }
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