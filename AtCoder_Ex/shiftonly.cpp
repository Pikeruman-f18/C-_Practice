#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);


    int n,x;
    vector<int> a;
    int odd = 0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(int i = 0; i<n; i++)
    {
        if(a.at(i) % 2 != 0)
        {
            odd = 1;
            cout<<"0"<<endl;
            return 0;
        }
        else
        {
            a.at(i) = a.at(i) / 2;
            if(a.at(i) % 2 != 0)
            {
                
            }
        }
        
    }

    return 0;
}
