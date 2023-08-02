// Arya and Bran: https://codeforces.com/problemset/problem/839/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, total(0);
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        total += nums[i];
    }
    if (k > total)
    {
        cout << -1 << endl;
        return 0;
    }

    int cur_count = k;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 8)
        {
            cur_count -= 8;
            nums[i] -= 8;
            if (i != n - 1)
                nums[i + 1] += nums[i];
        }
        else
        {
            cur_count -= nums[i];
        }
        if (cur_count <= 0)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}