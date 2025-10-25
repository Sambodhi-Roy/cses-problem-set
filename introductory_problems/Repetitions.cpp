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
    string dna;
    cin >> dna;
    int maxRep = 1;
    int currRep = 1;
    for (int i = 1; i < dna.size(); i++)
    {
        if (dna[i] == dna[i - 1])
        {
            currRep++;
            maxRep = max(maxRep, currRep);
        }
        else
        {
            currRep = 1;
        }
    }

    cout << maxRep << endl;
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