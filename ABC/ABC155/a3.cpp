#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N,cnt;
    string x;
    vector<string> s;
    vector<int> ans;
    vector<string> ans1;
    map<string,int> strin;

    cnt = 0;

    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>x;
        strin[x]++;
    }


    for(int i=0; i<N; i++)
    {
        cnt = 0;
        cnt = count(s.begin(), s.end(), s.at(i));
        ans1.push_back(s.at(i));
        ans.push_back(cnt);
    }

    return 0;
}
