// Bark to Unlock: https://codeforces.com/problemset/problem/868/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<char, char> pass;
    cin >> pass.first >> pass.second;

    int n;
    cin >> n;
    vector<pair<char, char>> phrases(n);

    for (int i = 0; i < n; i++)
    {
        cin >> phrases[i].first >> phrases[i].second;
        if (phrases[i].first == pass.first && phrases[i].second == pass.second)
        {
            cout << "YES";
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (phrases[i].first == pass.second && phrases[j].second == pass.first)
            {
                cout << "YES" << endl;
                return 0;
            }
            if (phrases[i].second == pass.first && phrases[j].first == pass.second)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}