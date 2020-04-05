#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x,y,z;
    vector<int> box;
    cin>>x>>y>>z;

    if(x<1 || y<1 || z<1)
    {
        return 0;
    }

    if(x>100 || y>100 || z>100)
    {
        return 0;
    }

    /*box.push_back(x);
    box.push_back(y);
    box.push_back(z);*/

    int a1,a2, a3;

    a1 = x;
    a2 = y;
    a3 = z;

    box.push_back(y);
    box.push_back(x);
    box.push_back(z);

    box.at(0) = z;
    box.at(2) = y;

    for(int i=0; i<3; i++)
    {
        cout<<box.at(i)<<" ";
    }

    cout<<endl;

    return 0;
}