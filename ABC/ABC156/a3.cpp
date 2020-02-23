#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int inf = 1000000000;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> X(n);

    rep(i,n) cin >> X[i];

    int L = X[0], R = X[0];
    rep(i,n)
    {
        L = min(L, X[i]);
        R = max(R, X[i]);
    }

    int ans = inf;

    for(int i = L; i<=R; i++)
    {
        
    }

    return 0;
}
