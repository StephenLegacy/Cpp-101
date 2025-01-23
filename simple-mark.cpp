#include <iostream>
using namespace std;

int main() {
    const int numStudents = 10; // Number of students
    int marks[numStudents];     // Array to store the marks
    int sum = 0;                // Variable to store the sum of marks
    double average;             // Variable to store the average of marks

    // Input marks for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the marks for student " << (i + 1) << ": ";
        cin >> marks[i];
        sum += marks[i]; // Add the marks to the total sum
    }

    // Calculate the average
    average = static_cast<double>(sum) / numStudents;

    // Display the marks for each student
    cout << "\n--- Student Marks ---\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << " marks: " << marks[i] << endl;
    }

    // Display the sum and average
    cout << "\nTotal sum of marks: " << sum << endl;
    cout << "Average mark: " << average << endl;

    return 0;
}
