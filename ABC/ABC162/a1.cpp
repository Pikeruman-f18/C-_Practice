#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string x;
    int flag=0;
    cin>>x;

    for(int i=0; i<3; i++)
    {
        if(x.at(i) == '7')
        {
            flag++;
        }
    }

    if(flag > 0)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else
    {
        cout<<"No"<<endl;
    }
    

    return 0;
}