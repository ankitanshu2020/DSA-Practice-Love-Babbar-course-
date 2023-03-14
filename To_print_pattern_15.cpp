// To print pattern like this
// A B C
// B C D
// C D E
// for n=3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    while (i <= n)
    {
        int j = 0;
        while (j < n)
        {
            cout << (char)(65 + i + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}