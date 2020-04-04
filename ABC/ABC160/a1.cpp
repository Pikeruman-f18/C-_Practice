#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin>>s;

    if(s.size() > 6)
    {
        cout<<"No"<<endl;
        return 0;
    }

    if(s.at(2) == s.at(3) && s.at(4) == s.at(5))
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else
    {
        cout<<"No"<<endl;
        return 0;
    }

    return 0;
}