"""
object:
あなたは、500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。 
これらの硬貨の中から何枚かを選び、
合計金額をちょうど X 円にする方法は何通りありますか。
同じ種類の硬貨どうしは区別できません。
2 通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が
異なるとき区別されます。

input data:
A
B
C
X

subject to:
0 ≤ A, B, C ≤ 50
A + B + C ≥ 1
50 ≤ X ≤ 20, 000
A, B, C は整数である
X は 50 の倍数である
"""

A = int(input())
B = int(input())
C = int(input())
X = int(input())

total = 0

for i in range(A+1):
  for j in range(B+1):
    for k in range(C+1):
      sum = 500*i + 100*j + 50*k
      if sum == X:
        total += 1
      sum = 0

print(total)


# answer code
"""


"""