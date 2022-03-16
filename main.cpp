#include <iostream>
#include "Problems/Problems.cpp"

using namespace std;

int main() {
    int input;
    cout << "Hello!!" << endl;
    cout << "Enter problem number:  ";

    cin >>  input;

    Problems problems;

    for (auto & i : problems.arr) {
        if (i->number == input){
            i->Compute();
            cout << i->answer;
        }
    }
    problems.arr.clear();

//    for (auto & i : problems.arr) {
//        if (i->number == input){
//            cout << i->number;
//            i->Compute();
//            cout << i->Compute();
//        }
//    }

    return 0;
}
