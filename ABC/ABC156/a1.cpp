#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, r,k;
    cin>>n>>r;

    if(n < 10)
    {
        k = 100 * (10 - n);
        cout<<(r + k)<<endl;
    }
    else
    {
        cout<<r<<endl;
    }
    

    return 0;
}
