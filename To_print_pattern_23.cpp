// To print pattern like this
// * * * *
//   * * *
//     * *
//       *
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
        int space = 1, j = 1;
        while (space < i)
        {
            cout << " ";
            space++;
        }

        int star = n - i + 1;
        while (j <= star)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}