#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    ll fizzbazz=0;
    ll fizz=0;
    ll bazz=0;
    ll sum=0;
    cin>>n;
    vector<ll> fizbazn(n);

    for(ll i=1; i<n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            fizzbazz++;
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            fizz++;
        }
        else if (i % 5 == 0 && i % 3 != 0)
        {
            bazz++;
        }
        else
        {
            sum = sum + i;
        }

    }
    cout<<sum<<endl;

    return 0;
}