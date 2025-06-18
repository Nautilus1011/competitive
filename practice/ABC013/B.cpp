/*
環状型の問題で便利な考え方

負の数を含む可能性がある計算結果 x を、適切な周期内の正の範囲に
収めるためのテクニック

時計や時間の場合
(x + 12) % 12

曜日の場合
(x + 7) % 7

今回の場合は錠前の問題で順転と逆転どちらの方が近いかという問題なので
これを使うと正数として大きさが出力される

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  
  int red = (b - a + 10) % 10;
  int blue = (a - b + 10) % 10;
  
  cout << min(red, blue) << endl;
  
}