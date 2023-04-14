#include <bits/stdc++.h>
using namespace std;

int facto(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int nume = facto(n);
    int deno = facto(n - r) * facto(r);

    int ans = nume / deno;

    return ans;
}
int main()
{
    int n, r;
    cout << "Please enter the value of n : ";
    cin >> n;
    cout << "Please enter the value of r : ";
    cin >> r;

    cout << n << " C " << r << " is " << nCr(n, r);

    return 0;
}