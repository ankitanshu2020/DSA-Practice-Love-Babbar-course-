#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money;
    cout << "Please enter the amount of money you have : ";
    cin >> money;

    int note[4] = {100, 50, 20, 1};
    for (int i = 0; i < 4; i++)
    {
        cout << "No. of notes of Rupees" << note[i] << " = " << (money / note[i]) << endl;
        money = (money % note[i]);
    }
    return 0;
}