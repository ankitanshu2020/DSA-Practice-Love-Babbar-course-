#include <bits/stdc++.h>
using namespace std;

// for even : 1
// for odd : 0
bool isEven(int x)
{
    if (x & 1)
    {
        // means if X & 1 results other than zero then it must be odd
        return 0;
    }
    // else
    // means X & 1 results zero (0) then it must be even
    return 1;
}
int main()
{
    int num;
    cout << "Please enter the value of num : ";
    cin >> num;
    if (isEven(num))
    {
        cout << num << " is an even number" << endl;
    }
    else
    {

        cout << num << " is an odd number" << endl;
    }

    return 0;
}