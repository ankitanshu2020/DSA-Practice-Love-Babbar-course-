#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 2, sum = 0;
    cout << "Please enter the value of n : ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }
    cout << "Sum of even numbers upto n is : " << sum << endl;

    return 0;
}