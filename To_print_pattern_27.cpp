// To print pattern like this
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
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
        int space = 1;
        while (space <= n - i)
        {
            cout << " "
                 << " ";
            space++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        j = i - 1;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}