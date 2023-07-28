// Ten Words of Wisdom: https://codeforces.com/problemset/problem/1850/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int max_quality(0), max_person(0);
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > max_quality)
            {
                max_quality = b;
                max_person = i + 1;
            }
        }
        cout << max_person << endl;
    }

    return 0;
}