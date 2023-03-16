// To print pattern like this
// 1 1 1 1
//   2 2 2
//     3 3
//       4
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
        while (space < i)
        {
            cout << " ";
            space++;
        }

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}