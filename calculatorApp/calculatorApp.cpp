#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello! In this app you can +,-,*,/\n";
    int first_number;
    int second_number;
    int result;
    char action;

    cout << "Choice the first number for you actions: ";

    cin >> first_number;

    cout << "Choice the second number for you actions: ";

    cin >> second_number;

    cout << "Choice you actions (+,-,*,/): ";

    cin >> action;

    cout << "You choice is:\nFirst number: " << first_number << "\nSecond number: " << second_number << "\nAction: " << action;

    switch (action) {
    case '+':
        result = first_number + second_number;
        cout << "\nYou result is: " << result;
        break;

    case '-':
        result = first_number - second_number;
        cout << "\nYou result is: " << result;
        break;
    case '*':
        result = first_number * second_number;
        cout << "\nYou result is: " << result;
        break;
    case '/':
        result = first_number / second_number;
        cout << "\nYou result is: " << result;
        break;
    }
    return 0;
}