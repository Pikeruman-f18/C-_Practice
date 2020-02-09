#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int ans=0;
  for(int i=0; i<S.size(); i++)
  {
      if(S.at(i) != '+' && S.at(i) != '-' )
      {
          ans += int(S.at(i));
      }
      else if (S.at(i) != '-' )
      {
          ans -= int(S.at(i));
      }
      else
      {
          continue;
      }
      
      
  }

  cout << ans << endl;

}
