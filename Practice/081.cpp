#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{

    string s;
    int cnt = 0;

    cin>>s;
    int test = 0;
    if(s[0] == '1')
    {
        cnt++;
    }

    if(s[1] == '1')
    {
        cnt++;
    }

    if(s[2] == '1')
    {
        cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
