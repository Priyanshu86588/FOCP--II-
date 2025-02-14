//Implement a program to search for a specific number in an array using linear search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int n, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index: " << result+1 << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
