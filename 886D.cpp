// Balanced Round: https://codeforces.com/problemset/problem/1850/D

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> difficulties(n);
    for (int i = 0; i < n; i++)
        cin >> difficulties[i];

    sort(difficulties.begin(), difficulties.end());

    int cnt(1), ans(1);
    for (int i = 1; i < n; i++)
    {
        if (difficulties[i] - difficulties[i - 1] > k)
        {
            cnt = 1;
        }
        else
        {
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}