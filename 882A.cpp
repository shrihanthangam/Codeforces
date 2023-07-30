// The Man who became a God: https://codeforces.com/problemset/problem/1847/A

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> differences(vector<int> a)
{
    if (a.size() == 1)
    {
        vector<int> del = {0};
        return del;
    }

    vector<int> ret(a.size() - 1);
    for (int i = 0; i < a.size() - 1; i++)
    {
        ret[i] = abs(a[i] - a[i + 1]);
    }

    return ret;
}

bool in(vector<int> a, int b)
{
    for (int x : a)
    {
        if (x == b)
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        vector<int> difs = differences(nums);
        sort(difs.begin(), difs.end());

        int total(0);
        for (int i = 0; i < difs.size() - k + 1; i++)
            total += difs[i];
        // for (int i = 0; i < k - 1; i++)
        // {
        //     int curMax = 0;
        //     for (int j = 0; j < difs.size(); j++)
        //     {
        //         if (!in(blockedIndexes, j) && difs[j] > difs[curMax])
        //             curMax = j;
        //     }
        //     blockedIndexes.push_back(curMax);
        //     total += difs[curMax];
        // }

        cout << total << endl;
    }
    return 0;
}