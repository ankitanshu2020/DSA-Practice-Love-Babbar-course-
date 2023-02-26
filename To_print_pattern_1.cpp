// to print this pattern of nXn like below 4X4 pattern
// * * * *
// * * * *
// * * * *
// * * * *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value of n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}