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
    string av1;
    string av2;

    if(s.size() < 3 || s.size() > 99)
    {
        cout<<"No"<<endl;
    }

    int n;
    int flag = 0;
    n = s.size();

    int a1, a2;

    a1 = (n - 1) / 2;
    a2 = (n + 1) / 2;

    for(int i = 0; i<a1; i++)
    {
        av1.push_back(s.at(i));
    }

    //cout<<a1<<endl;
    //cout<<a2<<endl;

    for(int i = a2; i<n; i++)
    {
       av1.push_back(s.at(i));
    }

    for(int i = 0; i<a1; i++)
    {
        if(av1.at(i) != av1.at(a1+i))
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}