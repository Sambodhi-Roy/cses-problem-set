#include <bits/stdc++.h>
using namespace std;

#define int long long

// Spiral Numbering Pattern:
//     ACW  CW  ACW
//  1   2   9   10
//  4   3   8   11
//  5   6   7   12
//  16  15  14  13

// Layer 1 -> 1
// Layer 2 -? 2 3 4
// Layer 3 -> 5 6 7 8 9
// Layer 4 -> 10 11 12 13 14 15 16

// max in every layer is the layer^2
// For even layers, the numbers are arranged in an anti-clockwise manner
// For odd layers, the numbers are arranged in a clockwise manner

// The number at (x,y) position belongs to the layer 'm' where m = max(x,y)

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
    int y, x;
    cin >> y >> x;
    int m = max(x, y);

    int ans = 0;

    if (x >= y)
    {
        if (m % 2 == 1)
            ans = m * m - y + 1;
        else
            ans = (m - 1) * (m - 1) + y;
    }
    else
    {
        if (m % 2 == 0)
            ans = (m * m) - x + 1;
        else
            ans = (m - 1) * (m - 1) + x;
    }

    cout << ans << endl;
    return;
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}