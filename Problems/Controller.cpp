//
// Created by akbar on 18/03/2022.
//

#include "Controller.h"
using namespace std;

class Controller {
public:
    string owner;
    int id;
    vector<Problem*> problems;

    virtual ~Controller() = default;
    virtual void CollectProblems() = 0;


    void ListSolved() {
        // not completed
        CollectProblems();
        string str;
        int counter = 0;
        for (auto & i : problems) {
            if (i->correct){
                str += to_string(i->number);
                if (counter < 2){
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