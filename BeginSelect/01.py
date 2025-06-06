"""
object :
高橋君はデータの加工が行いたいです。
整数 
a,b,cと、文字列 
s が与えられます。 
a+b+c の計算結果と、文字列 
s を並べて表示しなさい。

input data :
a
b c
s

subject to:
1 ≤ a, b, c ≤ 1, 000
1≤ ∣s∣ ≤ 100
"""



a = int(input())
b, c = map(int, input().split())
s = input()

sum = a + b + c

print(sum, s)