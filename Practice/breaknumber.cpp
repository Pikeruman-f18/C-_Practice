#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int N = 200;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;

    int i = 1;

    while(1)
    {
        if(i < n)
        {
            i *= 2;
        }
        else if (i == n) 
        {
            break;
        }
        else
        {
            i /= 2;
            break;
        }
        
    }
    cout<<i<<endl;
    return 0;
}
