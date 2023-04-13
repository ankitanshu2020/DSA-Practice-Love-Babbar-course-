#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value of n : ";
    cin >> n;

    for (int i = 2; i <= n;)
    {
        cout << i << " ";
        i = i + 2;
    }

    return 0;
}