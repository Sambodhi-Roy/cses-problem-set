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
    int n;
    cin >> n;
    vector<int> hash(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hash[x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            cout << i << endl;
            return;
        }
    }

    return;
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}