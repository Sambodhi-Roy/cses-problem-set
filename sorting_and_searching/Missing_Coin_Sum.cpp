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

    sort(nums.begin(), nums.end());
    ll sum = 0;
    // Existing Sum: [0...sum]
    // Adding c: [c...sum+c]
    // If c>sum+1, then we cannot form sum+1

    for(int i=0;i<n;i++)
    {
        if(nums[i] > sum+1)
        {
            cout<<sum+1<<endl;
            return;
        }
        sum += nums[i];
    }

    cout<<sum+1<<endl;
    return;

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