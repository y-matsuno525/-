#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  string f;
  cin >> N >> A;

  // ここにプログラムを追記
  for (int i=0; i<N; i++){
    cin >> f >> B;

    if(f=="+"){
      cout << i+1 << ":" << A+B << endl;
      A = A+B;
    }
    else if(f=="-"){
      cout << i+1 << ":" << A-B << endl;
      A = A-B;
    }
    else if(f=="*"){
      cout << i+1 << ":" << A*B << endl;
      A = A*B;
    }
    else if(f=="/"){
        if(B==0){
            cout << "error" << endl;
            break;
        }
        else{
            cout << i+1 << ":" << A/B << endl;
            A = A/B;
        }
    }
  }
}
