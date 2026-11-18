// LeetCode Problem: Two Sum
// Problem Number: 1
// Difficulty: Easy
// Topic: Array, Hash Table
// Language: C++

#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;

        for (size_t i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            auto match = indices.find(complement);

            if (match != indices.end()) {
                return {match->second, static_cast<int>(i)};
            }

            indices[nums[i]] = i;
        }

        return {};
    }
};