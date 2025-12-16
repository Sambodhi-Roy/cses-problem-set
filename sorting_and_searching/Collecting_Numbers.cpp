#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> pos(n+1);
    for(int i=0;i<n;i++)
    {
        cin>> nums[i];
        pos[nums[i]] = i;
    }

    int ans = 1;
    for(int i=1;i<n;i++)
    {
        if(pos[i+1]<pos[i])
        {
            ans++;
        }
    }

    cout<<ans<<endl;
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