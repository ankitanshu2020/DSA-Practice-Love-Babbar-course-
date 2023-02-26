#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Please Enter the value of n : ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum of 1 to " << n << " is : " << sum << endl;

    return 0;
}