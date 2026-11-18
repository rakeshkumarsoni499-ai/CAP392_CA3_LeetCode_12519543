// LeetCode Problem: Design Parking System
// Problem Number: 1603
// Difficulty: Easy
// Topic: Design
// Language: C++

class ParkingSystem {
private:
    int big;
    int medium;
    int small;

public:
    ParkingSystem(int big, int medium, int small)
        : big(big), medium(medium), small(small) {}

    bool addCar(int carType) {
        if (carType == 1 && big > 0) {
            big--;
            return true;
        }

        if (carType == 2 && medium > 0) {
            medium--;
            return true;
        }

        if (carType == 3 && small > 0) {
            small--;
            return true;
        }

        return false;
    }
};