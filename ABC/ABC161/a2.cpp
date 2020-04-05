#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m,a1;
    vector<int> a;
    cin>>n>>m;

    if(m<1 || n<1)
    {
        return 0;
    }

    if(m>100 || n>100)
    {
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        cin>>a1;
        a.push_back(a1);
    }

    sort(a.begin(), a.end());

    int goukei;

    for(int i=0; i<n; i++)
    {
        goukei += a.at(i);
    }

    double goukei4;

    goukei4 = goukei * ((double)(1 / (4*(double)m)));

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(a.at(i) > goukei4)
        {
            cnt++;
        }
    }
    /*cout<<"goukei:"<<goukei<<endl;
    cout<<"goukei4:"<<goukei4<<endl;
    cout<<"CNT:"<<cnt<<endl;
    cout<<"N:"<<n<<endl;
    cout<<"M:"<<m<<endl;
    cout<<a.at(0)<<endl;*/

    if(m==1 && a.at(n-1) >= goukei4)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else if (cnt>=m)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else
    {
        cout<<"No"<<endl;
        return 0;
    }
    


    return 0;
}