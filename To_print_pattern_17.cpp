// To print pattern like this
// A
// B C
// D E F
// G H I J
// when input is 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
