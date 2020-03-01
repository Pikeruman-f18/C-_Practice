#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; //建設地点候補数
    int t,a; //平均気温、理想気温
    int x; //T - x * 0.006
    vector<int> h; //各地点の標高メートル
    double degree = 0;
    int sai = 0, sai2 = 0;
    int ans = 0;

    cin>>n;
    cin>>t>>a;

    rep(i,n)
    {
        cin>>x;
        h.push_back(x);
    }

    //a1 = a;

    rep(i,n)
    {
        degree = t - h.at(i) * 0.006;
        //cout<<degree<<endl;
        sai = (abs(degree) - abs(a));
        //cout<<"h["<<i<<"]"<<" "<<sai<<endl;
        //cout<<"h"<< i<<sai2<<endl;
        if(i == 0)
        {
            sai2 = sai;
        }
        //cout<<"h["<<i<<"]"<<" "<<sai2<<endl;
        if(sai < sai2)
        {
            sai2 = sai;
            //ans += 1;
            ans = i;
        }
    }

    cout<<ans<<endl;

    return 0;
}