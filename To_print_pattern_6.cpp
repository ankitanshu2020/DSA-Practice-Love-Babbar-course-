// To print pattern like this for n=3
// 9 8 7
// 6 5 4
// 3 2 1
// for n=3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    int count = n * n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            j++;
            count--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
