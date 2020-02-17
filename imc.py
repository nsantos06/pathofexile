from tkinter import *

principal = Tk()
principal.title("Calculadora de IMC")

#função para calcular o imc
def imc():
    if(str(peso.get()).isnumeric() or str(altura.get()) .isnumeric()):
        x = float(peso.get())
        y = float(altura.get())
        z = float(x/(y**2))
        resultado["text"] = z 
#peso
peso = Label(principal, width = 10, text = 'Peso')
peso.place(x=0,y=160)
#colocar o peso
peso = Entry(principal)
peso.place(x=0,y=180)
#altura
altura = Label(principal, width = 10, text = 'Altura')
altura.place(x=0, y=210)
#colocar a altura
altura = Entry(principal)
altura.place(x=0,y=240)
#botão calcular imc
calculo = Button(principal, width = 10, text = 'Calcular IMC', command = imc )
calculo.place(x=0,y=270)

#Criando a Tabela pra mostrar o IMC:
tabela = Label(principal, text = 'Resultados do IMC:')
tabela.grid(row=0, column = 0)

tabela2 = Label(principal, width = 15, text = 'Menor que 18,5')
tabela2.grid(row=1,column = 0)

tabela3 = Label(principal, width = 15, text = 'Entre 18,5 e 24,9')
tabela3.grid(row=2, column = 0)

tabela4 = Label(principal, width = 15, text = ' Entre 25 e 29,9')
tabela4.grid(row=3, column = 0)

tabela5 = Label(principal, width = 15, text = 'Entre 30 e 34,9')
tabela5.grid(row=4, column = 0)

tabela6 = Label(principal, width = 15, text = 'Entre 35 e 39,9')
tabela6.grid(row=5, column = 0)

tabela7 = Label(principal, width = 15, text = 'Maior que 40')
tabela7.grid(row=6, column = 0)
#Outra parte mostrando o nivel de obesidade:
ob = Label(principal, width = 15, text ='Abaixo do peso')
ob.grid(row=1, column=1)

ob1 = Label(principal, width = 15, text ='Peso normal')
ob1.grid(row=2, column=1)

ob2 = Label(principal, width = 15, text ='Sobrepeso')
ob2.grid(row=3, column=1)

ob3 = Label(principal, width = 15, text ='Obesidade grau 1')
ob3.grid(row=4, column=1)

ob4 = Label(principal, width = 15, text ='Obesidade grau 2')
ob4.grid(row=5, column=1)

ob5 = Label(principal, width = 15, text ='Obesidade grau 3')
ob5.grid(row=6, column=1)

#resultado do calculo
resultado = Label(principal, width = 20, text = 'Resultado Irá aparecer aqui')
resultado.place(x=0,y=310)

principal.geometry("800x600")
principal.mainloop()
