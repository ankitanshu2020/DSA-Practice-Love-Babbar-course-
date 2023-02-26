#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, i = 2;
    cout << "Please enter value of num : ";
    cin >> num;

    while (i < num)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number : ";
            return 0;
        }
        i++;
    }
    cout << num << " is a prime number " << endl;

    return 0;
}