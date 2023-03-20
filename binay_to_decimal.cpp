#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the value of n in Binary : ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;

        ans = digit * pow(2, i) + ans;

        // if (digit == 1)
        // {
        //     ans = ans + pow(2, i);
        // }

        n = n / 10;

        i++;
    }
    cout << "Answer in Decimal is : " << ans << endl;

    return 0;
}