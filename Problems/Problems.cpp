//
// Created by akbar on 16/03/2022.
//
#include <filesystem>
#include <vector>
#include <regex>

#include "problem_list.h"

using namespace std;
using std::filesystem::current_path;
using filesystem::directory_iterator;

class Problems {
public:
    vector<Problem*> arr;


    Problems() {
        //  -> here add your Problem <-
        arr.push_back(new Problem_1);
        arr.push_back(new Problem_2);
        arr.push_back(new Problem_3);
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