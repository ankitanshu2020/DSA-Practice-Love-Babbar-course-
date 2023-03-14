// To print pattern like this

//    *
//   * *
//  * * *
// * * * *
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
        // To print spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // To print stars
        int j = 1;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}