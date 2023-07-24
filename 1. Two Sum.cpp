//
// Created by Ashik on 24/7/23.
//
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& num, int target) {
        vector<vector<int>> v;
        int N = A.size(), L = 0, R = N - 1;
        for (int i = 0; i < N; ++i) v.push_back({ A[i], i });
        sort(begin(v), end(v));
        while (L < R) {
            int sum = v[L][0] + v[R][0];
            if (sum == target) return { v[L][1], v[R][1] };
            if (sum < target) ++L;
            else --R;
        }
        return {};
    }
};

int main() {
    // Example input data
    std::vector<int> num = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    std::vector<int> result = solution.twoSum(num, target);

    return 0;
}