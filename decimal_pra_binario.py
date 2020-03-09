n = int(input("Digite o numero em decimal:"))
k = ""
while n>0:
  k = k + str ( n % 2)
  n = int(n/2)
print(k[::-1])
