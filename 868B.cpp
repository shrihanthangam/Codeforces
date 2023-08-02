// Race Against Time: https://codeforces.com/problemset/problem/868/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, m, s, t1, t2, ans(0);
    cin >> h >> m >> s >> t1 >> t2;

    if (t1 > t2)
        swap(t1, t2);
    if (h >= t1 && h < t2)
        ans++;
    if (m >= t1 * 5 && m < t2 * 5)
        ans++;
    if (s >= t1 * 5 && s < t2 * 5)
        ans++;
    if (ans == 0 || ans == 3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}