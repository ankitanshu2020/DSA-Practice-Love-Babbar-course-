// Valid triangle rule is that, sum of two sides must be greater than third. Let a triangle has 3 sides named as 'a', 'b' and 'c' , in which relation like this must as a+b > c, a+c > b, b+c > a .

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter the sides of triangle : ";
    cin >> a >> b >> c;

    if (a + b > c || a + c > b || b + c > a)
    {
        cout << "It will form a triangle " << endl;
    }
    else
    {
        cout << "It will not form a triangle" << endl;
    }

    return 0;
}