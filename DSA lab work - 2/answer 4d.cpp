#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore();
    string arr[n];

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr, arr + n);

    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}