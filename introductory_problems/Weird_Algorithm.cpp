#include <bits/stdc++.h>
using namespace std;

#define int long long

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
    vector<int> ans;
    ans.push_back(n);

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        ans.push_back(n);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}