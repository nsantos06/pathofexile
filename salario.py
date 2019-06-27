def salario():
  sal = float(input("Qual seu salario?:"))
  if sal <280:
    print(f'Como haverá um reajuste o seu salário será de:',(sal * 0.2)+sal)
  elif sal > 280 < 700:
    print(f'Como haverá um reajuste o seu salário será de:',(sal * 0.15)+sal)
  elif sal >700 < 1500:
    print(f'Como haverá um reajuste o seu salário será de:',(sal * 0.10)+sal)
  elif sal > 1500:
    print(f'Como haverá um reajuste o seu salário será de:',(sal * 0.05)+sal)

  if sal < 280:
    print(f'O Seu salário antes do reajuste era {sal} com aumento de 20%  o valor do aumento é',(sal*0.2),'Seu novo salário será',(sal*0.2)+sal)
  elif sal > 280 < 699:
    print(f'O Seu salário antes do reajuste era {sal} com aumento de 15%  o valor do aumento é',(sal*0.15),'Seu novo salário será',(sal*0.15)+sal)
  elif sal >701 < 1500:
    print(f'O seu Salário antes do reajuste era {sal} com aumento de 10% o valor do aumento é',(sal*0.10),'Seu novo salário será',(sal*0.10)+sal)
  elif sal > 1500:
    print(f'O Seu salário antes do reajuste era {sal} com o aumento de 5% o valor de aumento será',(sal*0.05),'Seu novo salário será de',(sal*0.05)+sal)

#nao terminado
