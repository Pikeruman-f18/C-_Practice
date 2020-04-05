#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,k;
    cin>>n>>k;

    if(n<0 || k<1)
    {
        return 0;
    }

    if(n>1000000000000000000 || k>1000000000000000000)
    {
        return 0;
    }

    int diff,diff2,diffn;
    int cnt=0;
     diffn = n;
    while(1)
    {
        diff = abs(diffn-k);
        diff2 = diffn-k;
        if(diff2 < 0)
        {
            break;
        }
        diffn = diff;
    }

    cout<<diffn<<endl;

    return 0;
}