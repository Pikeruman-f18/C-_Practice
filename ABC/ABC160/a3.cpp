#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k,n,m;
    cin>>k>>n;

    if(k < 2 || k > 1000000)
    {
        return 0;
    }

    if(n < 2 || n > 2 * 100000)
    {
        return 0;
    }

    vector<int> a;
    vector<int> b;

    for(int i=0; i<n; i++)
    {
        cin>>m;
        a.push_back(m);
    }

    sort(a.begin(),a.end());

    int minx;

    for(int i=0; i<n-1; i++)
    {
        minx = a.at(i+1) - a.at(i);
        b.push_back(minx);
    }

    b.push_back(20 - (a.at(n-1)- a.at(0)));

    //cout<<b.at(4)<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<b.at(i)<<endl;
    }

    return 0;
}