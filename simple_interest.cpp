#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pr, ra, ti;
    cout << "Please enter the value of Principal : ";
    cin >> pr;
    cout << "Please enter the value of Rate of interest : ";
    cin >> ra;
    cout << "Please enter the value of time : ";
    cin >> ti;

    float si = (float)(pr * ra * ti) / 100;
    cout << "Simple interest is : " << si;

    return 0;
}