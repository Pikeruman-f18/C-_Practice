#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  int ans2 = x * (a + b);
  cout << ans2 << endl;
  
  int ans3 = ans2;

  ans3 *= ans2;
  cout << ans3 << endl;

  ans3 -= 1;

  cout << ans3 << endl;
   

return 0;

}
