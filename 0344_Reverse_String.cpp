// LeetCode Problem: Reverse String
// Problem Number: 344
// Difficulty: Easy
// Topic: String, Two Pointers
// Language: C++

#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;

        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
};