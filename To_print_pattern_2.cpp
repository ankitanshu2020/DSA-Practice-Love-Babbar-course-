// To print pattern like this as n=4
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter value of n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}