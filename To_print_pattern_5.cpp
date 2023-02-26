// To print pattern like this for n=3
// 1 2 3
// 4 5 6
// 7 8 9

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
        while (j <= n)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}