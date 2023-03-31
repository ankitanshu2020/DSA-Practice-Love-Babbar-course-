// To print hollow rectangle like pattern like this

// * * * * * * * *
// *             *
// *             *
// *             *
// *             *
// * * * * * * * *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Please enter the value of row : ";
    cin >> row;
    cout << "Please enter the value of column : ";
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        // Star will be prited for the first and the last row
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < col; j++)
            {

                cout << "* ";
            }
        }
        else
        {
            // first star
            cout << "* ";
            for (int k = 0; k < col - 2; k++)
            {
                cout << "  ";
            }
            // last star
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}