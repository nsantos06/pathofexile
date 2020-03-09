n = 0
k = int(input("qnts vezes vai repetir :"))
for c in range(0,k):
  idade = int(input("Digite a idade:"))
  if (k-1) != c:
    n = n + idade

media = n/(k-1)
print(media)
