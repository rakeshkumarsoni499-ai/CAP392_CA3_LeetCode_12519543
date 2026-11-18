// LeetCode Problem: Best Time to Buy and Sell Stock
// Problem Number: 121
// Difficulty: Easy
// Topic: Array, Greedy
// Language: C++

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (size_t i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};