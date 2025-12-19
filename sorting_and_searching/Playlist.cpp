#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int &x:nums)
    {
        cin>> x;
    }

    map<int,int> freq;
    int l = 0;
    int r = 0;
    int maxi = 1;
    while(r<n)
    {
        freq[nums[r]]++;

        while(freq[nums[r]]>1)
        {
            freq[nums[l]]--;
            l++;
        }

        int currLen = r-l+1;
        maxi = max(maxi, currLen);
        r++;
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