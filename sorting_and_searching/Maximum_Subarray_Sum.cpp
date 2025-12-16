#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

// Kadane's Algorithm
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &x:arr)
    {
        cin>>x;
    }

    ll maxi = INT_MIN;
    ll currSum = 0;

    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        maxi = max(maxi, currSum);
        if(currSum<0)
        {
            currSum = 0;
        }
    }

    cout<<maxi<<endl;
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