#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    cout << "Fibonacci series is : " << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextnumber = a + b;

        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
    }

    return 0;
}