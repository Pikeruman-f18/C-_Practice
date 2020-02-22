#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, y;
    vector<int> x;
    vector<int> ans;
    int ans2 = 0;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        cin>>y;
        x.push_back(y);
    }

    for(int i = 0; i<n; i++)
    {
         ans.push_back((x.at(i) - n) * (x.at(i) - n));
    }

    for(int i = 0; i<n; i++)
    {
        sort(ans.begin(), ans.end());
        ans2 += ans.at(i);
    }

    cout<<ans2<<endl;

    return 0;
}
