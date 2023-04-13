#include <bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans = ans * x;
    }
    return ans;
}
int main()
{
    int a, b, c, d, e, f;
    cout << "Please enter the value of number : ";
    cin >> a;
    cout << "Please enter the value of power : ";
    cin >> b;

    cout << b << " Power of " << a << " is " << power(a, b) << endl;

    cout << "Please enter the value of number : ";
    cin >> c;
    cout << "Please enter the value of power : ";
    cin >> d;

    cout << d << " Power of " << c << " is " << power(c, d) << endl;

    cout << "Please enter the value of number : ";
    cin >> e;
    cout << "Please enter the value of power : ";
    cin >> f;

    cout << f << " Power of " << a << " is " << power(e, f) << endl;

    return 0;
}