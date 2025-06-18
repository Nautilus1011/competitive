/*
vector<pair< , >>の便利な使い方

出力時に入力情報を保持しておきたい場合に有用
今回の場合では大きな値順にソートした後、pairのsecondに格納した
インデックス情報を活用して入力と同じ順序で出力するプログラム

*/


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {
  int a, b, c;
  vector<pair<int, int>> scores(3);
  rep (i, 3) {
    cin >> scores[i].first;
    scores[i].second = i;
  }
  
  sort(scores.rbegin(), scores.rend());
  
  vector<int> rank(3);
  rep(i, 3) {
    rank[scores[i].second] = i+1;
  }
  
  rep(i, 3) {
    cout << rank[i] << endl;
  }
  
}