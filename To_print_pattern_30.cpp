// To print pattern like this

// 1
// 1 2
// 1 2 3
// 1 2 3 4

// for input = 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Please enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}