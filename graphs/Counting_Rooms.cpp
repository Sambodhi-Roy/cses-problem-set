/*

We need to count the no. of connected components in the given graph (represented using an adjacency matrice).
So, we use DFS to find the no. of the connected components.

*/

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

void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int i, int j)
{
    visited[i][j] = true;

    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, 1, -1};
    for (int ind = 0; ind < 4; ind++)
    {
        int newR = i + dr[ind];
        int newC = j + dc[ind];
        if (newR >= 0 && newR < grid.size() && newC >= 0 && newC < grid[0].size() && grid[newR][newC] == '.' && !visited[newR][newC])
        {
            dfs(grid, visited, newR, newC);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m));
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                count++;
                dfs(grid, visited, i, j);
            }
        }
    }

    cout << count << endl;
}

int32_t main()
{
    solve();

    return 0;
}