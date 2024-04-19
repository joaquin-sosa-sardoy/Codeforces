inp = input()
primLetra = str(inp[0])

primLetra = primLetra.upper() #Upper devuelve la primera letra mayuscula. lower minuscula
print(primLetra, end="") #Si no le agrego end, queda la primera letra mayuscula arriba

for i in range(1,len(inp)):
    print(inp[i], end="")

print(" ")

# Otra res:

# inp = input()
# print(inp[0].capitaliza() + inp[1::])

# Printear desde la 1 hasta el final
# XD ES EN DOS LINEAS

# https://codeforces.com/contest/231/problem/A
