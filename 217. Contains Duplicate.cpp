//
// Created by Ashik on 22/7/23.
//
#include<iostream>
#include<algorithm>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    static bool containsDuplicate(std::vector<int> &nums) {
        set<int> nonDuplicateSet(nums.begin(), nums.end());
        //cout << "print in cpp class. myset.size(): " << nonDuplicateSet.size() << " nums.size() :" << nums.size() << "\n";
        return nonDuplicateSet.size() < nums.size();
    }
};

int main() {
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(2);

    Solution checkDuplicate; //create ad object of Solution class
    cout << Solution::containsDuplicate(nums); //call solution function.

}