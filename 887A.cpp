// Desorting: https://codeforces.com/contest/1853/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        int min_difference = 1e9;
        bool sorted = true;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (i != 0)
            {
                min_difference = min(min_difference, A[i] - A[i - 1]);
                sorted &= A[i] >= A[i - 1];
            }
        }

        if (!sorted)
        {
            cout << 0 << endl;
            continue;
        }

        cout << min_difference / 2 + 1 << endl;
    }
    return 0;
}