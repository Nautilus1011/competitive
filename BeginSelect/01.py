"""
input data :
a
b c
s

1 ≤ a, b, c ≤ 1, 000
1≤ ∣s∣ ≤ 100
"""



a = int(input())
b, c = map(int, input().split())
s = input()

sum = a + b + c

print(sum, s)