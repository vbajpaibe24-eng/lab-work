#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n+1) * (n+2) / 2; // sum of first n+1 numbers
    for (int i = 0; i < n; i++) total -= arr[i];
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number: " << findMissing(arr, n) << endl;
}

