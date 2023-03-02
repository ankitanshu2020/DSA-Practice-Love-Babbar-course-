// To print pattern like this

// A B C
// A B C
// A B C
// for n = 3

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
            cout << (char)(65 + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}