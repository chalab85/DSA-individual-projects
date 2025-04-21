#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN

using namespace std;

void findSecondAndThirdLargest(vector<int>& arr) {
    if (arr.size() < 3) {
        cout << "Array must contain at least three elements!" << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int num : arr) {
        if (num > first) { // Update largest
            third = second;
            second = first;
            first = num;
        } else if (num > second && num != first) { // Update second largest
            third = second;
            second = num;
        } else if (num > third && num != second && num != first) { // Update third largest
            third = num;
        }
    }

    cout << "Second Largest: " << second << ", Third Largest: " << third << endl;
}

int main() {
    vector<int> arr = {12, 34, 56, 78, 9, 0};
    findSecondAndThirdLargest(arr);
    return 0;
}
