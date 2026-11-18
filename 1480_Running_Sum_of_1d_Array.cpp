// LeetCode Problem: Running Sum of 1d Array
// Problem Number: 1480
// Difficulty: Easy
// Topic: Array, Prefix Sum
// Language: C++

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};