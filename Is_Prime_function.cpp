#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout << "Please enter the value of n : ";
    cin >> n;

        if (isPrime(n))
    {
        cout << n << " is a Prime number" << endl;
    }
    else
    {
        cout << n << " is not a Prime number" << endl;
    }

    return 0;
}