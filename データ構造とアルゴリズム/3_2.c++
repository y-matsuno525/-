#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N,v;
    cout << "数列の長さを入力してください";
    cin >> N; 
    cout << "探したい数字を入力してください";
    cin >> v;
    cout << N << "個の整数を入力してください";
    vector<int> a(N);
    for (int i = 0; i<N; ++i) cin >> a[i];

    int count=0;
    for (int i = 0 ; i<N; i++){
        if (a[i]==v){
            count += 1;
        }
    }

    cout << v << "は" << count << "個出てきました" << endl;
}