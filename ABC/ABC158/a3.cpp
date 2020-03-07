#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    double a, b, ans1, ans2;
    double tax1 = 0.08;
    double tax2 = 0.10;

    cin>>a>>b;

    ans1 = a / tax1;
    ans2 = floor(b / tax2);

    cout<<ans1<<endl;
    cout<<ans2<<endl;

    return 0;
}