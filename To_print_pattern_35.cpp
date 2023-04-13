// To print hollow inverted half pyramid like this

// * * * * *
// *     *
// *   *
// * *
// *
// for input = 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}