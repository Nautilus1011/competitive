a, b = map(int, input().split())

def mul(a, b):
  return a*b

if mul(a, b) == 0:
  print("Even")
elif mul(a, b) % 2 == 0:
  print("Even")
else:
  print("Odd")