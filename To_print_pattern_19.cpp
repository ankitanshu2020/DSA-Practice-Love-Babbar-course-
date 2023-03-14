// To Print pattern like this
// D
// C D
// B C D
// A B C D
// for input = 4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 0;
    cout << "Please enter the value of n : ";
    cin >> n;
    while (i <= n)
    {
        char ch = 'A' + n - i;
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}