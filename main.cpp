#include <iostream>
#include "Problems/Problems.cpp"

using namespace std;

int main() {
    int input;
    cout << "Hello!!" << endl;
    cout << "Enter problem number:  ";

    cin >>  input;

    Problems problems;
//    problems.arr[problems.arr.size() - 1]->Compute();
//    cout << problems.arr[problems.arr.size() - 1]->answer;


    for (auto & i : problems.arr) {
        if (i->number == input){
            i->Compute();
            cout << i->answer;
        }
    }
    problems.arr.clear();

    return 0;
}
