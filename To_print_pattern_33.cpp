// To print pattern like this

//             1
//           2 3 2
//         3 4 5 4 3
//       4 5 6 7 6 5 4
//     5 6 7 8 9 8 7 6 5

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
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k < 2 * i; k++)
        {
            cout << k << " ";
        }

        int nxt = 2 * (i - 1);
        for (int l = 1; l < i; l++)
        {
            cout << nxt << " ";
            nxt--;
        }

        cout << endl;
    }

    return 0;
}
