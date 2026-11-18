// LeetCode Problem: Number of Recent Calls
// Problem Number: 933
// Difficulty: Easy
// Topic: Queue, Design
// Language: C++

#include <deque>

using namespace std;

class RecentCounter {
private:
    deque<int> requests;

public:
    int ping(int t) {
        requests.push_back(t);

        while (requests.front() < t - 3000) {
            requests.pop_front();
        }

        return static_cast<int>(requests.size());
    }
};