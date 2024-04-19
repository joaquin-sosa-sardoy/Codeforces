a = [int(i) for i in input().split(" ")]
n,m,metroLosa = a[0], a[1], a[2]
up_to_n, up_to_m= n//metroLosa, m//metroLosa

if(m%metroLosa) != 0:
    up_to_m += 1

if(n%metroLosa) != 0:
    up_to_n += 1

res = up_to_n * up_to_m

print(res)

# https://codeforces.com/problemset/problem/1/A
