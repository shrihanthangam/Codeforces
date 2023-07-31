// Rudolph and Tic-Tac-Toe: https://codeforces.com/problemset/problem/1846/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> board(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> board[i];
        }

        bool draw = true;
        // horizontal
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '.')
            {
                cout << board[i][0] << endl;
                draw = false;
                break;
            }
        }

        if (!draw)
            continue;

        // vertical
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '.')
            {
                cout << board[0][i] << endl;
                draw = false;
                break;
            }
        }

        if (!draw)
            continue;

        // diagnol
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '.')
        {
            cout << board[0][0] << endl;
            draw = false;
        }

        if (!draw)
            continue;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '.')
        {
            cout << board[0][2] << endl;
            draw = false;
        }

        if (!draw)
            continue;

        if (draw)
            cout << "DRAW" << endl;
    }

    return 0;
}