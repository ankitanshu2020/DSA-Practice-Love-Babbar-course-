#include <bits/stdc++.h>
using namespace std;

int manin()
{

    int num, n = 2;
    cout << "Please enter value of num : ";
    cin >> num;
    while (n < num)
    {
        if (num % n == 0)
        {
            cout << "Not a prime number " << endl;
            return 0;
        }
        n++;
    }
    cout << "It's prime number" << endl;

    return 0;
}