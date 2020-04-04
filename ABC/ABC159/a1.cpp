#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m,n;
    cin>>n>>m;

    int ab,ac,ad;
    int bb,bc,bd;
    int ans;

    ac = 2;
    bc = 2;

    if(m == 1)
    {
        //bc = 1;
        ab = n * (n-1);
        ad = ab / ac;

        //bb = m * (m-1);
        bd = 0;

        ans = ad + bd;

        cout<<ans<<endl;
        return 0;
    }
    else if(n == 1)
    {
        //ac = 1;
        //ab = n * (n-1);
        ad = 0;

        bb = m * (m-1);
        bd = bb / bc;

        ans = ad + bd;

        cout<<ans<<endl;
        return 0;
    }
    else if(n == 1 && m && 1)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {

    ab = n * (n-1);
        ad = ab / ac;

        bb = m * (m-1);
        bd = bb / bc;

        ans = ad + bd;

        cout<<ans<<endl;
        return 0;
    }
    return 0;
}