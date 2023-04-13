#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Please enter the value of row : ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        int k = 0;
        for (int j = 0; j < 2 * row - 1; j++)
        {
            if (j < row - i - 1)
            {
                cout << " ";
            }
            else if (k < 2 * i + 1)
            {
                cout << "*";
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}