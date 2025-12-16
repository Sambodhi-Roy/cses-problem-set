#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second = i+1;
    }

    sort(arr.begin(), arr.end());

    int i=0;
    int j=n-1;

    while(i<j)
    {  
        int sum = arr[i].first+arr[j].first; 
        if(sum==x)
        {
            cout<<arr[i].second<<" "<<arr[j].second<<endl;
            return;
        }
        else if(sum>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
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