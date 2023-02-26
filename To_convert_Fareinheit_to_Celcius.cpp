#include <bits/stdc++.h>
using namespace std;

int main()
{

    float dFar, dCel;
    cout << "Please enter the value of Farenheit : ";
    cin >> dFar;
    dCel = 5.0 / 9 * (dFar - 32);

    cout << "Value of degree " << dFar << " Farenheit "
         << " in Celcius is " << dCel << endl;

    return 0;
}