#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M; cin >> N >> M;
  long long test = 1000000000;
  
  long long tmp = 0;
  long long ans = 0;
  
  for (int i = 0; i < M; ++i) {
    if (i == 0) {
      tmp += 1;
      ans += 1;
    }
    else {
      tmp *= N;
      ans += tmp;
    }
  }
  
  
  if (test < ans) {
    cout << "inf" << endl;
  }
  else {
    cout << ans << endl;
  }
}





#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M; cin >> N >> M;
  long long test = 1000000000;
  
  long long tmp = 1;
  long long ans = 1;
  
  for (int i = 1; i < M+1; ++i) {
    tmp *= N;
    ans += tmp;
  }
  
  
  if (test < ans) {
    cout << "inf" << endl;
  }
  else {
    cout << ans << endl;
  }
}

