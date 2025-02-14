//calculate the sum and average of n number dtored in an array.
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 
    int sum = 0; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    double average = (double)sum / n;

    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    return 0;
}
