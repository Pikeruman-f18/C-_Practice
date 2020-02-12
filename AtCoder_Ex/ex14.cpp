#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> a = {A,B,C};

    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    int max1 = a.at(0);

    sort(a.begin(),a.end());

    int min1 = a.at(0);

    int result = max1 - min1;

    cout<<result<<endl;

    return 0;

}
