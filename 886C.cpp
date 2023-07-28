// Word on the Paper: https://codeforces.com/problemset/problem/1850/C

#include <iostream>
using namespace std;

const int WIDTH = 8;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        for (int i = 0; i < WIDTH; i++)
        {
            for (int j = 0; j < WIDTH; j++)
            {
                char c;
                cin >> c;
                if (c != '.')
                    cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}