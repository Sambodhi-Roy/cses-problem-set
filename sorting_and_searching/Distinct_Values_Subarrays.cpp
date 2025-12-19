#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &x: arr)
    {
        cin>>x;
    }

    unordered_map<int,int> freq;
    ll count = 0;

    int l = 0;
    int r = 0;

    while(r<n)
    {
        freq[arr[r]]++;

        while(freq[arr[r]]>1)
        {
            freq[arr[l]]--;
            l++;
        }

        // Counting all the unique subarrays in the valid window l...r
        // Eg: [1,2,3,4] -> Window in l...r
        // To count all the subarrays in this, we do : l + (l+1) + (l+2)+...+r
        
        // This is equal to (r-l+1)
        count+= r-l+1;

        r++;
    }

    cout<<count<<endl;
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