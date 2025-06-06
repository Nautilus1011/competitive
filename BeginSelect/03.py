"""
input data:
s_1s_2s_3

s_1s_2s_3は 0あるいは１
"""

list = list(map(int, input()))

total = 0

for i in range(3):
  if list[i] == 1:
    total += 1

print(total)