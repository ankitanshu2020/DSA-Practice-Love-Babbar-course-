// To print pattern like this
// * * * *
// * * *
// * *
// *
// for input = 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    while (i <= n)
    {
        int star = n - i + 1;
        while (star)
        {
            cout << " * ";
            star--;
        }
        // NO NEED TO PRINT SPACE
        // int space = i - 1;
        // while (space < n)
        // {
        //     cout << " ";
        //     space++;
        // }

        cout << endl;
        i++;
    }

    return 0;
}