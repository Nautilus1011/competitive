#include <bits/stdc++.h>
using namespace std;


/*
キャスト関数一覧
to_string() :　数値型　→　string

stoi()      :　string　→　int

stod()      :　string　→　double

stoll()     :　string　→　long long
*/


int main() {
  int N; cin >> N;
  int x = 2025 - N;
  
  vector<string> res;
  
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      if (i*j == x) {
        /*一度すべてstringにキャストしたうえてソート*/
        res.push_back(to_string(i) + " x " + to_string(j));
      }
    }
  }
  
  /*辞書順で出力したい場合、sort()を通すと安心*/
  sort(res.begin(), res.end());
  
  for (string s : res) {
    cout << s << endl;
  }
  
}