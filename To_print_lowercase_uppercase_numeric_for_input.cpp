#include <bits/stdc++.h>
using namespace std;

int main()
{

    // elseif input is A-Z, print "uppercase"
    // elseif input is a-z, print "lowercase"
    // if input is 0-9, print "numeric"
    // else print "invalid"

    char ch;
    cout << "Please enter any value : ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Input is Upper-case" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Input is Lower-case" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Input is Numeric" << endl;
    }
    else
    {
        cout << "Input is invalid" << endl;
    }

    return 0;
}