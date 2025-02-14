//Write a program to find the transpose of a matrix.
#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][100], int transposed[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[100][100], transposed[100][100];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    printMatrix(matrix, n);

    transposeMatrix(matrix, transposed, n);

    cout << "\nTransposed Matrix:\n";
    printMatrix(transposed, n);

    return 0;
}

