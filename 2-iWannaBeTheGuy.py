nivel = int(input())
lst1 = input()
lst2 = input()
res = True
for i in range(1, nivel+1):
    if(str(i) not in lst1 + lst2):
        res = False

if(res):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")

# El juez está mal.

# https://codeforces.com/problemset/problem/469/A
