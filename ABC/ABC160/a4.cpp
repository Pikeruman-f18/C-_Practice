#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,x,y;
    cin>>n>>x>>y;

    if(n < 3 || n > 2*1000)
    {
        return 0;
    }

    if(x < 1 || n)
    {
        return 0;
    }

    if(y< 1 || n)
    {
        return 0;
    }

    if(x + 1 >= y)
    {
        return 0;
    }

    



    return 0;
}