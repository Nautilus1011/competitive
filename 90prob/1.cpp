#include <bits/stdc++.h>
using namespace std;

long long N, L, K;
vector<int> A;


bool is_ok (int x) {
  int prev = 0;
  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    if (A[i] - prev >= x) {
      cnt++;
      prev = A[i];
    }
  }
  if (L - prev >= x) {
    cnt++;
  }
  
  /*K回切ってできるピースはK+1個　cntは長さx以上のピースの個数であるからK+1個以上あればtrueを返す*/
  return cnt >= K + 1;
}


int main() {
  cin >> N >> L >> K;
  A.resize(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  
  long long left = 0;
  long long right = L + 1;
  
  while (right - left > 1) {
    long long dim = 0;
    dim = (right + left) / 2;
    if (is_ok(dim)) {
      left = dim;
    }
    else {
      right = dim;
    }
  }
  
  /*条件を満たすギリギリがleftになるように二分探索しているから*/
  cout << left << endl;
  
}
