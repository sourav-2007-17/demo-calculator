#include <iostream>
using namespace std;

int Add(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

int Modulus(int a, int b) {
    return a % b;
}

int Divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Modulus" << endl;
    cout << "5. Division" << endl;

    int ch, a, b;
    cout << "Enter your choice: ";
    cin >> ch;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    switch (ch) {
        case 1:
            cout << "Result: " << Add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << Subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << Multiply(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << Modulus(a, b) << endl;
            break;
        case 5:
            cout << "Result: " << Divide(a, b) << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1-5." << endl;
            break;
    }

    return 0;
}
