#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, x,flag;
    vector<int> a;
    flag = 0;
    cin>>N;
    for(int i = 0; i<N; i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(int i=0; i<N; i++)
    {
        if((a.at(i) % 2 == 0))
        {
            if((a.at(i) % 3 == 0 || a.at(i) % 5 == 0))
            {
                continue;
            }
            else
            {
                flag = 1;
            }
            
        }
    }

    if(flag == 0)
    {
        cout<<"APPROVED"<<endl;
    }
    else
    {
        cout<<"DENIED"<<endl;
    }
    

    return 0;
}
