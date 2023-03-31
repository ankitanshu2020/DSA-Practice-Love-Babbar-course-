// To print pattern like this

//      *
//     * *
//    *   *
//   *     *
//  * * * * *

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
        for (int j = 1; j <= (n - i); j++)
        {
            // for printing spaces before star
            cout << " ";
        }
        if (i == 1 || i == n)
        {
            for (int k = 1; k <= i; k++)
            {
                // for the first and last line, printing of stars
                cout << "* ";
            }
        }
        else
        {
            cout << "*"; // in each line star at start position

            for (int j = 1; j <= 2 * i - 3; j++)
            {
                // spaces between stars in pyramid
                cout << " ";
            }

            cout << "*"; // int each line star at end position
        }

        cout << endl;
    }

    return 0;
}
