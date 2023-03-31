// To print pattern like this

//     1 2 3 4 5
//     2     5
//     3   5
//     4 5
//     5

// for input = 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j == i || j == n || i == 1)
            {

                cout << j << " ";
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