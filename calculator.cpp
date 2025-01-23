#include <iostream>
#include <cmath> // For power function
using namespace std;

// Calculator class
class Calculator {
public:
    // Addition
    double add(double a, double b) {
        return a + b;
    }

    // Subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Division
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return NAN; // Return Not-a-Number
        }
    }

    // Modulus
    int modulus(int a, int b) {
        if (b != 0) {
            return a % b;
        } else {
            cout << "Error: Modulus by zero!" << endl;
            return 0;
        }
    }

    // Power
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Display the menu
    void displayMenu() {
        cout << "\n--- Calculator Menu ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Power" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
    }
};

int main() {
    Calculator calc;
    int choice;
    double num1, num2;
    int intNum1, intNum2;

    do {
        calc.displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter two integers: ";
                cin >> intNum1 >> intNum2;
                cout << "Result: " << calc.modulus(intNum1, intNum2) << endl;
                break;
            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.power(num1, num2) << endl;
                break;
            case 7:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}
