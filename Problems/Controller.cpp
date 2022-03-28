//
// Created by akbar on 16/03/2022.
//
#include <filesystem>
#include <regex>

#include "Users.h"

using namespace std;
//using std::filesystem::current_path;
//using filesystem::directory_iterator;

class Controller {
public:
    vector<User*> users;
    Problem* problem{};
    User* user{};

    Controller() {
        // add user here
        users.push_back(new Kabra4);
        users.push_back(new LegenDaVinci);

    }

    void PrintUsers(){
        string str = "\nID\tUser\n";
        for (auto & i : users){
            str += to_string(i->id) + "\t" + i->owner + "\n";
        }
        cout << str;
    }

    User* GetUserById(int id){
        User* result;
        for (auto & i : users){
            if (i->id == id) {
                result = i;
            }
        }
        return result;
    }

    void UserSelectDialog(){
        string input;
        this->PrintUsers();
        cout << "Enter User Id to proceed: ";
        cin >> input;
        if (Strings::contains(input, "-") || Strings::contains(input, "/")) {
            string div = Strings::contains(input, "-") ? "-" : "/";
            vector<string> v = Strings::split(input, div);
            user = GetUserById(stoi(v[0]));
            OutputAnswer(user->GetProblem(stoi(v[1])));
        } else {
            user = GetUserById(stoi(input));
            ProblemSelectDialog();
        }
    }

    void ProblemSelectDialog(int id = 0){
        int input;
        user->ListSolved();
        cout << "Enter problem id or zero to return: ";
        cin >> input;
        if (input == 0) {
            UserSelectDialog();
        } else {
            OutputAnswer(user->GetProblem(input));
        }
    }

    static void OutputAnswer(Problem* prob) {
        prob->Compute();
        cout << prob->answer << endl;
    }



};

// for later work
//string path = current_path().string();
//path += "/../Problems";
//
//regex endsCpp("Problem_\\d+.cpp\\b");
//regex filename(R"(.*(Problem_\d+\).cpp\b)");
//
//for (const auto & file : directory_iterator(path)){
//if ( regex_match(file.path().string(), endsCpp)){
//string className = regex_replace(file.path().string(), filename, "$1");
//
//}
//}