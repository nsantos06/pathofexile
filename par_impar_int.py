inteiro = []
par = []
impar = []
for c in range(20):
  k = int(input("Numeros:"))
  if k % 2 == 0:
    par.append(k)
  elif k % 2 == 1:
    impar.append(k)
    
  inteiro.append(k) 
print(f'Inteiros: {inteiro}, \n Pares:{par}, \n Impares:{impar}.')
