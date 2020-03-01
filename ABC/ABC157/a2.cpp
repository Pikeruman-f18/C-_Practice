#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
//const int ii = 100;
//const int jj = 100;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    int array[3][3];
    //int row[3][3];
    //int col[3][3];
    //int line[3][3];

    //ビンゴのマス目に入っている数
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>>array[i][j];
        }
    }

    cin>>n; //n個の数
    int b;
    vector<int> b1;

    rep(i,n)
    {
        cin>>b;
        b1.push_back(b);
    }

    //serach
    int cnt=0; //b1 serach
    int ii = 0;
    while(cnt<n)
    {
        for(int j = 0; j<3; j++)
        {
            //cout<<"b1.at("<<cnt<<"):"<<b1.at(cnt)<<endl;
            //cout<<"array["<<ii<<"]["<<j<<"]:"<<array[ii][j]<<endl;
            if(b1.at(cnt) == array[ii][j])
            {
                array[ii][j] = 0; //mark
                //row[ii][j] = 1; //bingo mark
            }
        }

        ii++;
        if(ii > 2)
        {
            ii = 0;
            cnt++;
        }
    }

    int row = 0;
    int col = 0;
    int line = 0;
    int flag = 0;
    //row
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            row += array[i][j];
        }
    }

    //col
    for(int j = 0; j<3; j++)
    {
        for(int i = 0; i<3; i++)
        {
            col += array[i][j];
        }
    }

    //line
    if(array[1][1] == array[0][0] && array[1][1] == array[2][2]) line = array[0][0]+array[1][1]+array[2][2];
    if(array[1][1] == array[0][2] && array[1][1] == array[2][0]) line = array[0][2]+array[1][1]+array[2][0];

    //cout<<row<<endl;
    //cout<<col<<endl;
    //cout<<line<<endl;

   /* for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }*/




    if(row == 0 || col == 0 || line == 0)
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