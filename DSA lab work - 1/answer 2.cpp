#include <iostream>
using namespace std;



int remove_Duplicates(int arr[], int n) {
    if (n == 0){
        cout << "Array is empty";
    }
        

    int new_Size = 0;

    for (int i = 0; i < n; i++) {
        bool is_Duplicate = false;

        // Check if arr[i] is already present in the new array
        for (int j = 0; j < new_Size; j++) {
            if (arr[i] == arr[j]) {
                is_Duplicate = true;
                break;
            }
        }

        // If not duplicate, add to new array portion
        if (!is_Duplicate) {
            arr[new_Size] = arr[i];
            new_Size++;
        }
    }

    return new_Size; // Return new size of array
}



int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    n = remove_Duplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}