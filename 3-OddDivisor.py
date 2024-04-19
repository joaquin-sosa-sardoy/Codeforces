pots = []
i = 2
while(i<1000000000000001):
    i = i*2
    pots.append(i)
print(pots)

inputs = int(input())
for i in range(inputs):
    j = int(input())

    if(j in pots):
        print("NO")
    else:
        print("YES")

# https://codeforces.com/problemset/problem/1475/A