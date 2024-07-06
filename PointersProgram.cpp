#include <iostream>

using namespace std;

int main() {
    // Integer variables
    int num1, num2, num3;

    // Prompting user to enter 3 integers
    cout << "Enter three integer values:" << endl;
    cin >> num1 >> num2 >> num3;

    // Creating integer pointers and allocating memory dynamically
    int *ptr1 = new int(num1);
    int *ptr2 = new int(num2);
    int *ptr3 = new int(num3);

    // Displaying contents of variables and pointers
    cout << "\nVariables:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    cout << "\nPointers:" << endl;
    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;
    cout << "ptr3 = " << *ptr3 << endl;

    // Deleting dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Setting pointers to nullptr after deletion
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}
