//
// Created by Akbar on 19/03/2022.
//
#include <string>
#include <iostream>
#include "cmath"
#include "vector"
using namespace std;

class Strings {
public:
    static bool contains(string in, string what){
        return in.find(what) != string::npos;
    }

    static vector<string> split (string s, string delimiter) {
        size_t pos_start = 0, pos_end, delim_len = delimiter.length();
        string token;
        vector<string> res;

        while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
            token = s.substr (pos_start, pos_end - pos_start);
            pos_start = pos_end + delim_len;
            res.push_back (token);
        }

        res.push_back (s.substr (pos_start));
        return res;
    }

};