#include <bits/stdc++.h>
using namespace std;

#define int long long

bool canCreate(int time, int k, vector<int> &arr)
{
    int n = arr.size();
    int total = 0;

    for(int i=0;i<n;i++)
    {
        total += (time/arr[i]);
        if(total>=k)
            return true;
    }    

    return (total>=k);
}

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int mini = INT_MAX;

    for(int &x: arr)
    {
        cin>>x;
        mini = min(mini, x);
    }

    int ans = mini*k;

    int low = 0;
    int high = ans;

    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(canCreate(mid, k, arr))
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}