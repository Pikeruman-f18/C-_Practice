#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, page;
    cin>>n;

    if( n % 2 == 0)
    {
        page = n / 2;
    }
    else
    {
        page = (n / 2) + 1;
    }
    
    cout<<page<<endl;

    return 0;
}