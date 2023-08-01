// Fafa and the Gates: https://codeforces.com/problemset/problem/935/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, coins(0);
    pair<int, int> curPos;
    curPos.first = 0;
    curPos.second = 0;
    string lastSide = "middle";
    cin >> n;

    if (n == 1)
    {
        char c;
        cin >> c;
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'U')
        {
            curPos.second += 1;
        }
        else
        {
            curPos.first += 1;
        }
        if (i == 0)
        {
            if (c == 'U')
            {
                lastSide = "left";
            }
            else
            {
                lastSide = "right";
            }
            continue;
        }

        if (curPos.first != curPos.second)
        {
            if (curPos.first > curPos.second && lastSide == "left")
            {
                lastSide = "right";
                coins += 1;
            }
            else if (curPos.first < curPos.second && lastSide == "right")
            {
                lastSide = "left";
                coins += 1;
            }
        }
    }

    cout << coins;
    return 0;
}