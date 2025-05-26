#include <bits/stdc++.h>
using namespace std;

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

const int N = 200005;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<vector<char>> forest(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> forest[i][j];
        }
    }

    vector<vector<int>> prefixGrid(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prefixGrid[i][j] = (forest[i][j] == '*');
            if (i > 0)
            {
                prefixGrid[i][j] += prefixGrid[i - 1][j];
            }
            if (j > 0)
            {
                prefixGrid[i][j] += prefixGrid[i][j - 1];
            }
            if (i > 0 && j > 0)
            {
                prefixGrid[i][j] -= prefixGrid[i - 1][j - 1];
            }
        }
    }

    while (q--)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        x1--;
        y1--;
        y2--;
        x2--;
        int result = prefixGrid[y2][x2];
        if (y1 > 0)
        {
            result -= prefixGrid[y1 - 1][x2];
        }
        if (x1 > 0)
        {
            result -= prefixGrid[y2][x1 - 1];
        }
        if (x1 > 0 && y1 > 0)
        {
            result += prefixGrid[y1 - 1][x1 - 1];
        }

        cout << result << endl;
    }
}

int32_t main()
{

    solve();

    return 0;
}