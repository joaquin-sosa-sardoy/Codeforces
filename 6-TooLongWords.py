num = int(input())
for i in range(num):
    palabras = input()
    if(len(palabras)>10):
        abrev = str(palabras[0] + str(len(palabras)-2) + str(palabras[-1]))
        print(abrev)
    else:
        print(palabras)

#Recordar guardar el string y LUEEEEEEGO printearlo.

# https://codeforces.com/problemset/status?my=on