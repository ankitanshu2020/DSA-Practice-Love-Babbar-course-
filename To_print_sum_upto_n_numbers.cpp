#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Please enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of numbers upto " << n << " is : " << sum << endl;

    return 0;
}