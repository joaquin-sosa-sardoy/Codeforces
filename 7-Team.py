lineas = int(input())
count = 0
for i in range(lineas):
    jota = input()

    p,t,c = int(jota[0]), int(jota[2]), int(jota[4])
    if(p+t+c == 2 or p+t+c == 3):
        count = count+1

print(count)

# https://codeforces.com/problemset/problem/231/A
    