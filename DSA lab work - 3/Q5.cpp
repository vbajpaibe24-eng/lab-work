#include <iostream>
using namespace std;

void diagonalMatrix(int n) {
    int A[n] = {0};
    for (int i=0;i<n;i++) A[i] = i+1; 
    cout << "Diagonal Matrix:\n";
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i==j) cout << A[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

void tridiagonalMatrix(int n) {
    int size = 3*n - 2, A[size];
    for (int i=0;i<size;i++) A[i] = i+1; 
    cout << "Tri-diagonal Matrix:\n";
    int k=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (abs(i-j) <= 1) cout << A[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

void lowerTriangular(int n) {
    int size = n*(n+1)/2, A[size];
    for (int i=0;i<size;i++) A[i] = i+1; 
    cout << "Lower Triangular:\n";
    int k=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i>=j) cout << A[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

void upperTriangular(int n) {
    int size = n*(n+1)/2, A[size];
    for (int i=0;i<size;i++) A[i] = i+1;
    cout << "Upper Triangular:\n";
    int k=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i<=j) cout << A[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

void symmetricMatrix(int n) {
    int size = n*(n+1)/2, A[size];
    for (int i=0;i<size;i++) A[i] = i+1;
    cout << "Symmetric Matrix:\n";
    int k=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i>=j) cout << A[i*(i+1)/2 + j] << " ";
            else cout << A[j*(j+1)/2 + i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    diagonalMatrix(n);
    cout << endl;
    tridiagonalMatrix(n);
    cout << endl;
    lowerTriangular(n);
    cout << endl;
    upperTriangular(n);
    cout << endl;
    symmetricMatrix(n);
}
