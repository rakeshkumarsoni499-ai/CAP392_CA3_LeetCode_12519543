// LeetCode Problem: Contains Duplicate
// Problem Number: 217
// Difficulty: Easy
// Topic: Array, Hash Table
// Language: C++

#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};