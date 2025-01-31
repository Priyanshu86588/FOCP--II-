//create a program to simulate an ATM machine using a switch statement. include options for withdrawl, deposit,balance inquiry and exit with error handling for invalid input and insufficient balance.
#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
    double balance = 1000.00; // Initial balance
    int choice;
    double amount;

    while (true) {
        // Display the ATM menu
        cout << "\n========== ATM Menu ==========\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "==============================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle invalid input (non-integer)
        if (cin.fail()) {
            cin.clear();              // Clear error flag
            cin.ignore(1000, '\n');   // Discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        switch (choice) {
            case 1: // Withdrawal
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (cin.fail() || amount <= 0) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid amount. Please enter a positive number.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance. Transaction failed.\n";
                } else {
                    balance -= amount;
                    cout << "Transaction successful. You withdrew $" << fixed << setprecision(2) << amount << ".\n";
                    cout << "Updated balance: $" << balance << ".\n";
                }
                break;

            case 2: // Deposit
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (cin.fail() || amount <= 0) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid amount. Please enter a positive number.\n";
                } else {
                    balance += amount;
                    cout << "Transaction successful. You deposited $" << fixed << setprecision(2) << amount << ".\n";
                    cout << "Updated balance: $" << balance << ".\n";
                }
                break;

            case 3: // Balance Inquiry
                cout << "Your current balance is: $" << fixed << setprecision(2) << balance << ".\n";
                break;

            case 4: // Exit
                cout << "Thank you for using the ATM. Goodbye!\n";
                return 0;

            default: // Invalid choice
                cout << "Invalid choice. Please select an option between 1 and 4.\n";
                break;
        }
    }

    return 0;
}
