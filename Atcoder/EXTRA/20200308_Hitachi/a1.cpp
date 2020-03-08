#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    char s1;

    cin>>s;

    /*rep(i,s.size())
    {
        if((i+2)<=s.size())
        {
            if(s.at(i) != s.at(i+1))
            {
                if(s.at(i+1) == s.at(i+2))
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                cout<<"Yes"<<endl;
            }
        }
    }*/

    int size = s.size();

    if(s.size() > 10 && size = 0)
    {
        cout<<"No"<<endl;
    }

    int flag = 0;
    for(int i = 0; i<size; i+=2)
    {
        if(s.at(i) == 'h' && s.at(i+1) == 'i')
        {
           flag = 0;
           
        }
        else
        {
            flag = 1;
            
        }

    }

     if(flag == 0)
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