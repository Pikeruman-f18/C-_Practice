#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    int H,A;

    cin>>H>>A;

    int ans = (H+A-1)/A;
    cout<<ans<<endl;
    
    return 0;
}
