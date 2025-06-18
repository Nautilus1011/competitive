/*
文字列反転の問題

stackを活用して実現
下のコメント部分のコードは間違えたコード

data.pop()は値を返さない
先頭のデータを取得したい場合はdata.top()で参照
その後data.pop()と加えることでその下のデータに次回参照できる


*/


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {
  string s; cin >> s;
  int n; cin >> n;
  
  stack<char> char_stack;
  rep(i, n) {
    int l, r; cin >> l >> r;
    for (int j = l - 1; j < r; ++j) {
      char_stack.push(s.at(j));
    }
    
    
    
    for (int k = l - 1; k < r; ++k) {
      s.at(k) = char_stack.top();
      char_stack.pop();
    }
    
  }
  cout << s << endl;
}



/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {
  string s; cin >> s;
  int n; cin >> n;
  
  stack<char> char_stack;
  rep(i, n) {
    int l, r; cin >> l >> r;
    for (int j = l - 1; j < r - 1; ++j) {
      char_stack.push(s.at(j));
    }
    
    
    
    for (int k = l - 1; k < r - 1; ++k) {
      s.at(k) = char_stack.pop;
    }
    
  }
  cout << s << endl;
}








*/