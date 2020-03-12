#função binario pra decimal
rep = int(input("Qual deseja executar? 1 de bin pra decimal, 2 decimal pra binario:"))
if rep == 1:
  def bin():
      x = 0
      b = 1
      k = int(input("Digite o numero em binario:"))
      while k !=0:
        j = k % 10
        x = x + (j*b)
        k = k//10
        b = b*2
    print("O Numero em decimal vai ser:",x)
bin()

#função decimal para binário
elif rep == 2:
  def decimal():
    n = int(input("Digite um numero:"))
    a = ""
    while n>0:
      a = a + str (n%2)
      n = int(n/2)
    print(a[::-1])
  decimal()
