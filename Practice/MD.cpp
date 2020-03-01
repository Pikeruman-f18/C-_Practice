#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin>>n;

    vector<int> a;

    rep(i,n)
    {
        cin>>x;
        a.push_back(x);
    }
    
    stable_sort(a.begin(), a.end());

    int ans;

    ans = a.at(n-1) - a.at(0);

    cout<<ans<<endl;

    return 0;
}
