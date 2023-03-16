// To print pattern like this
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
// for n = 5

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
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        int star = 1;
        while (star < 2 * i - 1)
        {
            cout << "*";
            star++;
        }
        int k = n - i + 1;
        while (k >= 1)
        {
            cout << k;
            k--;
        }
        i++;
        cout << endl;
    }

    return 0;
}
