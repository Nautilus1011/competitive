"""
object:
シカのAtCoDeerくんは二つの正整数 
a,b を見つけました。 
a と b の積が偶数か奇数か判定してください。

input data:
a b

subject to:
1 ≤ a,b ≤ 10000
a,b は整数
"""


a, b = map(int, input().split())

def mul(a, b):
  return a*b

if mul(a, b) == 0:
  print("Even")
elif mul(a, b) % 2 == 0:
  print("Even")
else:
  print("Odd")