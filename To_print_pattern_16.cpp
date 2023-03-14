// To print pattern like this
// A
// B B
// C C C
// for n=3;

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
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}