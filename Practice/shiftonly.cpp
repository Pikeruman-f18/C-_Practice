#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N, a, ans, cnt;
    cnt = 0;
    cin>>N;
    vector<int> A;

    for(int i = 0; i<N; i++)
    {
        cin>>a;
        A.push_back(a);
    }

    int i = 0;
    int flag = 1;
    while(flag == 1)
    {
       if(A.at(i) % 2 != 0)
       {
           cout<<"0";
           cout<<"\n";
           return 0;
       }
       else
       {
           ans = A.at(i) / 2;
           
           if(ans % 2 != 0)
           {
               cout<<"0";
               cout<<"\n";
           
           }
           
           A.at(i) = ans;
           
       }
       if(i<N)
       {
          i++;
       }
       else
       {
           i = 0;
       }
       cnt++;
    }

    cout<<cnt;
    cout<<"\n";


    return 0;
}
