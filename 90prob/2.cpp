/*

再帰関数

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
