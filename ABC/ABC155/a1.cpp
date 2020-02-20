#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,c;
    cin>>a>>b>>c;

    if((a == b) && (b == c))
    {
        cout<<"No"<<endl;
        return 0;
    }
    else if ((a == b))
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else if (b == c)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else if (a == c)
    {
        cout <<"Yes"<<endl;
        return 0;
    }
    else
    {
        cout<<"No"<<endl;
        return 0;
    }

    return 0;
}
