#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,sum;
  cin >> N;
  sum=0;

  vector<int> vec(N);

  //入力
  for(int i =0;i<N; i++){
    cin >> vec.at(i);
    sum = sum + vec.at(i);
  }
  
  //出力
  int ave=sum/N;
  for(int i =0; i<N; i++){
    if(vec.at(i)-ave < 0){
        cout << ave-vec.at(i) << endl;
    }
    else{
        cout << vec.at(i)-ave << endl;
    }
  }
  
}
