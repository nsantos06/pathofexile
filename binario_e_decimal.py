#função binario pra decimal
rep = int(input("Qual deseja executar? 1 de bin pra decimal, 2 decimal pra binario:"))
if rep == 1:
  def bin():
    k = str(input("Digite o numero em binario:"))
    j = int(k,2)
    print(j)
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
