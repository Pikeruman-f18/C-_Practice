#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, acnt;
  
  cin >> N;
  vector<int> a(N);
  acnt = 0;
  
  for(int i=0; i<N; i++)
  {

      cin>>a.at(i);

  }

  for(int i=0; i<N; i++)
  {
      acnt += a.at(i);
  }

  int avg = acnt/N;

  for(int i=0; i<N; i++)
  {
      if(a.at(i) > avg)
      {
          cout<<a.at(i)-avg<<endl;
      }
      else
      {
          cout<<avg-a.at(i)<<endl;
      }
  }

  return 0;
}
