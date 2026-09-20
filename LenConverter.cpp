
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double meters, result;

    do {
        cout << "\n========================================\n";
        cout << "       METERS CONVERSION PROGRAM\n";
        cout << "========================================\n";
        cout << "1. Meters to Kilometers\n";
        cout << "2. Meters to Centimeters\n";
        cout << "3. Meters to Millimeters\n";
        cout << "4. Meters to Feet\n";
        cout << "5. Meters to Inches\n";
        cout << "6. Exit\n";
        cout << "========================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter length in meters: ";
            cin >> meters;

            if (meters < 0) {
                cout << "Length cannot be negative!\n";
                continue;
            }
        }

        cout << fixed << setprecision(2);

        switch (choice) {
            case 1:
                result = meters / 1000.0;
                cout << "Result: " << result << " kilometers\n";
                break;

            case 2:
                result = meters * 100;
                cout << "Result: " << result << " centimeters\n";
                break;

            case 3:
                result = meters * 1000;
                cout << "Result: " << result << " millimeters\n";
                break;

            case 4:
                result = meters * 3.28084;
                cout << "Result: " << result << " feet\n";
                break;

            case 5:
                result = meters * 39.3701;
                cout << "Result: " << result << " inches\n";
                break;

            case 6:
                cout << "Thank you for using the program!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}