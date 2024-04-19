n = int(input())
k = int(input())
count = 0

for i in range(n):
    playerPoints = int(input())

    if(playerPoints > k):
        count = count + 1

print(count)

# https://codeforces.com/problemset/problem/158/A