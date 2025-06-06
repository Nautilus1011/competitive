"""
object:
黒板に 
N 個の正の整数 A_1 A_2 ... A_N が書かれています．
すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．
黒板に書かれている整数すべてを，
2 で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．

input data:
N
A_1 A_2 ... A_N

subject to:
1 ≤ N ≤ 200
1 ≤ A_i ≤ 10^9
"""


N = int(input())
data = list(map(int, input().split()))

total = 0
x = 0

for i in range(30):
  for j in range(N):
    if data[j] % 2 != 0:
      x = 5
      break
  
  if x == 5:
    break
  
  total += 1
  for k in range(N):
    data[k] /= 2

print(total)