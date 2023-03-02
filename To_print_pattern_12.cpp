// To print pattern like this

// A A A
// B B B
// C C C
// for input = 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Please enter the value of n : ";
    cin >> n;
    char a = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << a << " ";
            j++;
        }
        cout << endl;
        i++;
        a++;
    }

    return 0;
}