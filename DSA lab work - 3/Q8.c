#include <iostream>
using namespace std;

int countDistinct(int arr[], int n) {
    int count = 0;
    for (int i=0;i<n;i++) {
        int j;
        for (j=0;j<i;j++) {
            if (arr[i] == arr[j]) break;
        }
        if (i==j) count++;
    }
    return count;
}

int main() {
    int arr[] = {10,20,10,30,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Distinct elements: " << countDistinct(arr,n) << endl;
}

