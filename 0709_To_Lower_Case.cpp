// LeetCode Problem: To Lower Case
// Problem Number: 709
// Difficulty: Easy
// Topic: String
// Language: C++

#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (char& ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = static_cast<char>(ch + ('a' - 'A'));
            }
        }

        return s;
    }
};