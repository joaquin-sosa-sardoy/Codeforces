palabra1 = input()
palabra2 = input()
aux = True
for i in range(len(palabra1)):
    if(palabra1[i].lower() != palabra2[i].lower()):
        aux = False
if(aux):
    print("0")

aux2 = True
for j in range(len(palabra1)):
    if(palabra1[j].lower() < palabra2[j].lower()):
        aux2 = False

if(aux2 and (not aux)):
    print("1")

aux3 = True
for j in range(len(palabra1)):
    if(palabra1[j].lower() > palabra2[j].lower()):
        aux3 = False

if(aux3 and not aux and not aux2):
    print("-1")

# Error test 5 (?)
# https://codeforces.com/problemset/problem/112/A