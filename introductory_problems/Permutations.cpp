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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    vector<int> odd, even;
    for (int i = 2; i <= n; i += 2)
    {
        even.push_back(i);
    }

    for (int i = 1; i <= n; i += 2)
    {
        odd.push_back(i);
    }

    if (n > 4)
    {
        reverse(odd.begin(), odd.end());
        reverse(even.begin(), even.end());
    }

    for (auto x : even)
        cout << x << " ";
    for (auto x : odd)
        cout << x << " ";
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}