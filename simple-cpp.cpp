#include <iostream>
#include <string> // Required for std::string
using namespace std;

int main() {
    // Declare variables with appropriate data types
    int age;             // For age, integer is sufficient
    double salary;       // For salary, double allows decimal points
    string address;      // For address, string can store text

    // Input section
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your salary: ";
    cin >> salary;
    cin.ignore(); // Clear the input buffer before reading a string

    cout << "Enter your address: ";
    getline(cin, address);

    // Output section
    cout << "\n--- User Information ---" << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Address: " << address << endl;

    return 0;
}
