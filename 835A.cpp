// 835A: Key races, https://codeforces.com/problemset/problem/835/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int f_total = (s * v1) + (2 * t1);
    int s_total = (s * v2) + (2 * t2);

    if (f_total < s_total)
        cout << "First" << endl;
    else if (f_total > s_total)
        cout << "Second" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}