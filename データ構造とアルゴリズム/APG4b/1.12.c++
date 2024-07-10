#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int sign;

  // ここにプログラムを追記
  int result = 1;
  for (int i=1; i<S.size(); i+=2){
    if(S.at(i)=='+'){
      sign = 1;
    }
    else{
      sign = -1;
    }
    result += sign*1;
  }
  cout << result << endl;
  return 0;
}
