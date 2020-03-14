#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int max1 = 1000000000;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a,b,c;
    cin>>a>>b>>c;

    int ma,mb,mc;

    if((1<=a && b >=1 && c>=1) && (a<=max1 && b <= max1 && c <= max1))
    {
        if((sqrt(a)+sqrt(b)) < sqrt(c) )
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
        
    }
    else if (a<0 && b<0 && c<0)
    {
        ma = -(a);
        mb = -(b);
        mc = -(c);
        if(((-sqrt(ma))+(-sqrt(mb))) < -sqrt(mc) )
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
        
    }
    else if (a<0 && b<0)
    {
        ma = -(a);
        mb = -(b);
        if(((-sqrt(ma))+(-sqrt(mb))) < sqrt(c) )
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    else if (a<0 && c<0)
    {
        ma = -(a);
        mc = -(c);
        if(((-sqrt(ma))+sqrt(b)) < -sqrt(mc) )
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    else if (b<0 && c<0)
    {
        mb = -(b);
        mc = -(c);
        if((sqrt(a)+(-sqrt(mb)))< -sqrt(mc) )
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}