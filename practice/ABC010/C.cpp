/*
直角三角形の斜辺の長さを計算するのに便利な関数
hypot(x, y)

2点間の斜辺を求めたい場合の引数は
hypot(x_1 - x_2, y_1 - y_2)

*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    int txa, tya, txb, tyb, T, V;
    cin >> txa >> tya >> txb >> tyb >> T >> V;

    int n;
    cin >> n;

    double maxDist = V * T;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        double d1 = hypot(x - txa, y - tya);  // 距離1: 最初の位置→女の子の家
        double d2 = hypot(x - txb, y - tyb);  // 距離2: 女の子の家→最終位置

        if (d1 + d2 <= maxDist) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
