//
// Created by Akbar on 19/03/2022.
//
#include <string>
#include <iostream>
#include "cmath"
#include "vector"
#include "set"

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

    static set<string> PermutateString(string chars, vector<int> positions = {}, int currentLoop = 0){
        // gives all variations of string chars
        // from 012 to << "012", "021", "102" ... >>
        vector<int> pos;
        set<string> result;
        set<string> temp;
        string version;
        for (int i = 0; i < chars.length(); ++i) {
            if (currentLoop != 0){
                if (find(positions.begin(), positions.end(), i) != positions.end())
                    continue;
            }
            pos = positions;
            pos.push_back(i);
            if (currentLoop < chars.length() - 1){
                temp = PermutateString(chars, pos, currentLoop + 1);
                result.insert(temp.begin(), temp.end());
            } else {
                for (int x : pos){
                    version += chars[x];
                }
                pos.clear();
                result.insert(version);
                return result;
            }
        }
        temp.clear();
        pos.clear();
        return result;
    }

};