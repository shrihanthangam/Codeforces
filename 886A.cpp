// To My Critics: https://codeforces.com/problemset/problem/1850/A

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c - min(min(a, b), c) >= 10)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}