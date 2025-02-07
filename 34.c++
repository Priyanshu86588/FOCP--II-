//create a program that takes input for a 2D array and prints the array in a formatted table, ensuring proper alignment of all elements.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    
    int arr[rows][cols];
    
    cout << "Enter elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "2D Array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
