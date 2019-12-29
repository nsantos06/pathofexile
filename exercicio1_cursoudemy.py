x = []
for i in range(1,8):
  j = int(input("Digite seu peso:"))
  if j > 90:
    cont = i
  media = j / 7 
print('Media dos peso',media)
print('Qnt de pessoas acima de 90kg : ',cont)
