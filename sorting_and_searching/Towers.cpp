#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int &x: nums)
    {
        cin>>x;
    }

    multiset<int> tops;

    for(int i=0;i<n;i++)
    {
        int num = nums[i];

        auto it = tops.upper_bound(num);
        if(it!= tops.end())
        {
            tops.erase(it);
        }

        tops.insert(num);
    }

    cout<< tops.size()<<endl;
}

int main() {
    fastio;

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}