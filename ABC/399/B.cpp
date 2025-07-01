/*
コードの模範解答
きれいだったので追加

ループの使い方や条件文の使い方で参考になりそうなものがいっぱい

問題をプログラムでどのように解決するのか先に考える力が重要だと感じた問題

配列内の要素で最大のものを抽出する方法や
すでに取り出したインデックスをスキップする方法も参考になった
*/




#include <bits/stdc++.h>
using namespace std;


int main () {
  int N; cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; ++i) {
    cin >> P[i];
  }
  vector<int> rank(N);
  int r = 1;
  while (true) {
    int x = 0;
    /*最大値を取り出すループ*/
    for (int i = 0; i < N; ++i) {
      /*既に参照したインデックスはスキップ*/
      if (rank[i]) continue;
      x = max(x, P[i]);
    }
    if (!x) break;
    int k = 0;
    /*順位を格納するループ*/
    for (int i = 0; i < N; ++i) {
      if (x == P[i]) {
        rank[i] = r;
        k++;
      }
    }
    r += k;
  }
  for (int i = 0; i < N; ++i) {
    cout << rank[i] << endl;
  }
  
}