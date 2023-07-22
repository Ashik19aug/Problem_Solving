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
        }

        for (const char occranceCharCount: t) {
            if (--count[occranceCharCount] < 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string c = "anagram", t = "nagaram";
    Solution::isAnagram(c, t);
    return 0;
}