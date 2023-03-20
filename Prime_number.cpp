#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Please enter the value num : ";
    cin >> num;
    bool isPrime = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            // cout << num << " is not a Prime  number";
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << num << " is not a Prime number" << endl;
    }
    else
    {
        cout << num << " is a Prime number" << endl;
    }

    return 0;
}