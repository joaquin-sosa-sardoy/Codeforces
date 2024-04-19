stringcito = input()
stringcito = stringcito.replace(" ", "")
stringcito = set(stringcito)

if(len(stringcito) % 2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

# https://codeforces.com/problemset/problem/236/A
#