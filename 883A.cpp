// Rudolph and Cut the Rope: https://codeforces.com/problemset/problem/1846/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int removed(0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i] > 0)
            removed += 1;
    }

    cout << removed << endl;
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