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
