#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, fact = 1;
    cout << "Please enter the value of num : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact;

    return 0;
}