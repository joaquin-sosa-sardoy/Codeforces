num = int(input())
X = 0
for i in range(num):
    st = input()
    if(str(st) == "++X" or str(st) == "X++"):
        X = X+1
    else:
        X = X-1
print(X)

# https://codeforces.com/problemset/problem/282/A