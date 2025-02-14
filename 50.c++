//A saddle point is an element of the matrix that is the smallest in its row but the largest in its column. Write a program to find the saddle point.
#include <iostream>
#include <vector>
using namespace std;

void findSaddlePoint(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool found = false;

    for (int i = 0; i < rows; i++) {
        // Find the minimum element in the row and its column index
        int min_row_val = matrix[i][0], min_col_index = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < min_row_val) {
                min_row_val = matrix[i][j];
                min_col_index = j;
            }
        }

        // Check if this element is the largest in its column
        bool is_saddle = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][min_col_index] > min_row_val) {
                is_saddle = false;
                break;
            }
        }

        if (is_saddle) {
            cout << "Saddle Point found at Row " << i << ", Column " 
                 << min_col_index << " with value " << min_row_val << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No Saddle Point found" << endl;
    }
}

// Driver function
int main() {
    vector<vector<int>> matrix = {
        {3, 8, 7},
        {5, 9, 6},
        {2, 4, 10}
    };

    findSaddlePoint(matrix);
    return 0;
}
