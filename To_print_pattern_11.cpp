// To print pattern like this

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// for input=4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }

        // int j = i;
        // while (j > 0)
        // {
        //     cout << j << " ";
        //     j--;
        // }
        cout << endl;
        i++;
    }

    return 0;
}