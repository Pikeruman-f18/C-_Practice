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
    int a[200];
    int flag = 0;
    int cnt = 0;

    cin>>n;

    rep(i,n) cin>>a[i];

    rep(i,n)
    {
        rep(i,n)
        {
            if(a[i] % 2 != 0)
            {
                flag++;
            }
        }

        if(flag != 0)
        {
            break;
        }

        rep(i,n)
        {
            a[i] /= 2;
        }

        cnt++;
    }
    
    cout<<cnt<<endl;

    return 0;
}
