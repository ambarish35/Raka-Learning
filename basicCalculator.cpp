#include <iostream>

using namespace std;

int main()
{
    // take 2 numbers, then take symbol(+,-,*,/,%)
    // Then show the result
    // Switch Case
    // int day;
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //     break;
    // default: cout<<"Invalid day entered by user";
    // }

    // if (day == 1)
    // {
    //     cout << "Monday";
    // }
    // else if (day == 2)
    // {
    //     cout << "Tuesday";
    // }
    // else
    // {
    //     cout << "Invalid day entered by user";
    // }
    int a, b;
    cout << "Enter 2 numbers";
    cin >> a;
    cin >> b;

    char operation;
    cout << "Enter operation(+,-,*,/,%): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
    {
        cout << "Sum is: " << a + b;
        break;
    }

    case '-':
    {
        cout << "Substraction is: " << a - b;
        break;
    }
    case '*':
    {
        cout << "Multiplication is: " << a * b;
        break;
    }
    case '/':
    {
        cout << "Division is: " << a / b;
        break;
    }
    case '%':
    {
        cout << "Remainder is: " << a % b;
        break;
    }
    default:
        cout << "Invalid operation requested!";
    }
    return 0;
}