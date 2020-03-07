#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,a,b,cnt1=0, sum;
    vector<string> cnt;
    cin>>n>>a>>b;
    sum = a + b;

    /*for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<a; j++)
        {
            cnt.push_back("b");
        }

        for(int k = 0; k<b; k++)
        {
            cnt.push_back("r");
        }

    }*/
    int i=0,j=0, nn;
    nn = n;
    int s=0;
    while(n>s)
    {
        if(a>i)
        {
            //cout<<i<<endl;
            cnt.push_back("b");
            i++;
        }
        else if (b>j)
        {
            cnt.push_back("b");
            j++;
        }

        if(n<=s)
        {
            i = 0;
            j = 0;
        }

        s++;

    }

    cout<<s<<endl;
    //cout<<nn<<endl;


    for(int i = 0; i<n; i++)
    {
        /*if(cnt.at(i) == "b")
        {
            cnt1++;
        }*/

        cout<<cnt.at(i);

    }
    //cout<<endl;
    //cout<<cnt1<<endl;

    return 0;
}