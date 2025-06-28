/*

再帰関数


仕組み的にはこんな感じ

N=10のとき

1回目の出力：((((()))))
2回目の出力：(((()())))
3回目の出力：(((())()))

４２回目の出力：()()()()()

といった感じで開きカッコを左から詰めた感じで出力されていく
これが辞書順にもなっていてそのまま解答になる
*/


#include <iostream>
#include <string>
using namespace std;




int N;

void generate(string s, int open, int close) {
  /*完成したとき*/
  if (s.size() == N) {
    cout << s << endl;
    return;
  }
  
  /*開きカッコを追加できる場合*/
  if (open < N / 2) {
    generate(s + "(", open + 1, close);
  }
  
  /*閉じカッコを追加できる場合*/
  if (close < open) {
    generate(s + ")", open, close + 1);
  }
}

int main() {
  cin >> N;
  
  /*Nが奇数なら絶対に正しいカッコ列は存在しない*/
  if (N % 2 != 0) return 0;
  
  generate("", 0, 0);
  return 0;
}
