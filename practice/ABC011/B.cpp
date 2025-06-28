/*
英文字の大文字小文字操作に関する便利な手法

大文字に変換 : toupper()

小文字に変換 : tolower()

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  s[0] = toupper(s[0]);
  for (int i = 1; i < s.size(); i++) {
    s[i] = tolower(s[i]);
  }
  cout << s << endl;
}