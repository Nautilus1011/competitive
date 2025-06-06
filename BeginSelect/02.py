"""
input data:
a b

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