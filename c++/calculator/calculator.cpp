#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1;
    int num2;
    int result;
    char operand;
    
    const char add = '+';
    const char subtract = '-';
    const char multiply = '*';
    const char divide = '/';
    

    cout << "Enter your first value: ";
    cin >> num1;
    cout << "Enter your second value: ";
    cin >> num2;
    cout << "Enter the operand: ";
    cin >> operand;
    
    switch (operand) {
        case add:
            result = num1 + num2;
            break;
        case subtract:
            result = num1 - num2;
            break;
        case multiply:
            result = num1 * num2;
            break;
        case divide:
            result = num1 / num2;
            break;
    }

    cout << "Result: " << result << endl;

    return 0;
}