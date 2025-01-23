#include <iostream>
#include <cmath> // For M_PI (value of pi)
using namespace std;

int main() {
    int choice;
    double base, height, length, width, radius, area;

    do {
        // Display menu
        cout << "\n--- Area Calculator ---" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Triangle area calculation
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = 0.5 * base * height;
                cout << "The area of the triangle is: " << area << endl;
                break;

            case 2:
                // Rectangle area calculation
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
                break;

            case 3:
                // Circle area calculation
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius; // M_PI is a constant for pi
                cout << "The area of the circle is: " << area << endl;
                break;

            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
