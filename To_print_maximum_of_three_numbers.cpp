#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter three numbers : ";
    cin >> a >> b >> c;

    // if (a > b && a > c)
    // {
    //     cout << a << " is largest among three ";
    // }
    // else if (b > c && b > a)
    // {
    //     cout << b << " is largest among three ";
    // }
    // else
    // {
    //     cout << c << " is largest among three ";
    // }

    int d = max(a, b);
    int e = max(d, c);
    cout << e << " is largest among three";

    return 0;
}