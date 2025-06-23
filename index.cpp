#include <iostream>
#include <limits>  // for numeric_limits
using namespace std;

void showMenu() {
    cout << "===========================" << endl;
    cout << "      Simple Calculator    " << endl;
    cout << "===========================" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "===========================" << endl;
    cout << "Enter your choice (1-5): ";
}

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        cin >> choice;

        // Check if input is a number
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            cout << "Invalid input! Please enter a number between 1 and 5.\n\n";
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            case 5:
                cout << "Exiting the calculator. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select between 1 and 5." << endl;
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}
