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

    int n, div2,max,cnt = 0;
    vector<int> a;
    bool flag = false;
    cin>>n;

    //a.push_back(n);

    div2 = n;

    while(n>0)
    {
        if(div2 % 2 == 0)
        {
            max = n;
            div2 /= 2;
            cnt++;
        }

        if(n % 2 != 0)
        {
            n -= 1;
        }

    }

    return 0;
}
