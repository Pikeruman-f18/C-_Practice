#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
//const int h1 = 1000000000;
//const int w1 = 1000000000;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h,w;
    cin>>h>>w;

    //if((h>=1 && w >=1) && (h<=1000000000 && w<=1000000000))
    //{
    //    return 0;
    //}


    int row[h][w];
    int col[h][w];
    int naname[h][w];

    int bishop_flag = 1;
    int i=0,j=0;
    int cnt=0;
    while(j<=h)
    {
        //row
        if(i==0 && j==0)
        {
            cnt++;
            i+=2;
            //cout<<"1:"<<cnt<<endl;
            //cout<<"1:"<<i<<endl;
        }

        if(i<w)
        {
                cnt++;
                i+=2;
                /*cout<<"2:"<<cnt<<endl;
                cout<<"2:"<<i<<endl;
                cout<<"2:"<<j<<endl;*/
        }else
        {
            i = 0;
        }

        j++;
        
        //cout<<"3:"<<j<<endl;
    }

    cout<<cnt<<endl;

    return 0;
}