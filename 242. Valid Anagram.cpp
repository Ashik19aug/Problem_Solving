//
// Created by Ashik on 22/7/23.
//
#include<iostream>
#include<string>
#include <vector>

using namespace std;

class Solution {
public:
    static bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> count(128);
        for (const char occranceCharCount: s) {
            ++count[occranceCharCount];
            cout<< "1st :"<<count[occranceCharCount]<<"\n";
        }

        for (const char occranceCharCount2: t) {
            cout<< "2nd :"<<count[occranceCharCount2]<<"\n";
            if (--count[occranceCharCount2] < 0) {
                cout<< "2nd if :"<<count[occranceCharCount2]<<"\n";
                return false;
            }
        }
        return true;
    }
};

int main() {
    string c = "rat", t = "car";
    Solution::isAnagram(c, t);
    return 0;
}