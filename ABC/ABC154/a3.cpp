#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    int n,x;
    vector<int> a;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());

    for(int i=0; i<(n-1); i++)
    {
        if(a[i] == a[i+1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
