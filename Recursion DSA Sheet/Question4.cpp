//Check if array is sorted using recursion
#include <iostream>
#include <vector>
using namespace std;

// Helper function that takes array and size, used for recursion
bool isSortedHelper(vector<int>& arr, int n) {
    if (n == 0 || n == 1)
        return true;
    return arr[n - 1] >= arr[n - 2] && isSortedHelper(arr, n - 1);
}

// Main function to check if array is sorted, only takes array as input
bool isSorted(vector<int>& arr) {
    return isSortedHelper(arr, arr.size());
}

int main() {
    vector<int> arr = { 10, 20, 30, 40, 50 };
    cout << (isSorted(arr) ? "true\n" : "false\n");
    return 0;
}