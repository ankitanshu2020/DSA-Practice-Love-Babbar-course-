// To print pattern like this
// A B C
// D E F
// G H I
// for n=3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    int count = 65;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (char)count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}