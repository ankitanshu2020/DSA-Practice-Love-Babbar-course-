// To print pattern like this
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// for input = 5
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1, count = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}