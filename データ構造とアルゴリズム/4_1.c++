#include <iostream>
#include <vector>
using namespace std;

int func(int N){
    if (N == 0)  return 0;
     else if (N==1) return 0;
     else if (N==2) return 1;
     else return func(N-1)+func(N-2)+func(N-3);

}

int main(){
    int n;
    cout << "トリボナッチ数列の何項目が知りたい？（初項は第０項です）";
    cin >> n;
    cout << func(n) << "です。";

}