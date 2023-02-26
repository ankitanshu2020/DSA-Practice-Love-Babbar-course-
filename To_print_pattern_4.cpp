// To print pattern like this
// n ... 3 2 1
// n ... 3 2 1
// n ... 3 2 1
// n ... 3 2 1
// n ... 3 2 1
// .
// .
// n times

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    while (i <= n)
    {
        // int j = n;
        // while (j)
        // {
        //     cout << j << " ";
        //     // we can also write it as n-j+1; , j=1
        //     j--;
        // }
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}