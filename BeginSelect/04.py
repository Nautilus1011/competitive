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