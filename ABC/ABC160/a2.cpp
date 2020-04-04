#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;

    cin>>x;

    if(x<0 || x>1000000000)
    {
        return 0;
    }
    else if (x == 0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    

    int ans;
    int ans1, ans2;
    int a500,a5;
    int cnt=0, cnt2=0;

    ans = x / 500;

    //cout<<ans<<endl;

    ans1 = x - (500*ans);
    a500 = 1000 * ans;

    //cout<<"ans1:"<<ans1<<endl;
    //cout<<"a500:"<<a500<<endl;

    
    ans2 = ans1 / 5;
    a5 = ans2 * 5;

    cout<<a500+a5<<endl;


    return 0;
}