"""
object:
すぬけ君は 
1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 
各マスには 0 か 1 が書かれており、マス i には s_iが書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 
ビー玉が置かれるマスがいくつあるか求めてください。

input data:
s_1s_2s_3

subject to:
s_1s_2s_3は 0あるいは１
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