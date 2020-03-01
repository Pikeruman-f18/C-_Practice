#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;

    vector<int> s(m);
    vector<int> c(m);
    vector<int> ans(n);

    rep(i,m)
    {
        cin>>s[i]>>c[i];
    }

    for(int i = 1; i<=n; i++)
    {
        ans[i] = c[i-1];
    }

    for(int i = 1; i<=n; i++)
    {
        cout<<"ans["<<i<<"]:"<<ans[i]<<endl;
    }


    return 0;
}