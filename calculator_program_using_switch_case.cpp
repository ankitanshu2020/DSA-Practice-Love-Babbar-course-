#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter the value of a and b : ";
    cin >> a >> b;

    char op;
    cout << "Please enter the symbol of operation : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result : " << a + b;
        break;

    case '-':
        cout << "Result : " << a - b;
        break;

    case '*':
        cout << "Result : " << a * b;
        break;

    case '/':
        cout << "Result : " << a / b;
        break;

    case '%':
        cout << "Result : " << a % b;
        break;
    default:
        cout << "Please enter valid symbol" << endl;
    }

    return 0;
}