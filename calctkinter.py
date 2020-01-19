from functools import partial
from tkinter import *
def soma():
    if(str(espaco.get()).isnumeric() and str(espaco2.get()) .isnumeric()):
        x = int(espaco.get())
        y = int(espaco2.get())
        lb_resultado1["text"] = x+y
def sub():
     if(str(espaco.get()).isnumeric() and str(espaco2.get()) .isnumeric()):
        x = int(espaco.get())
        y = int(espaco2.get())
        lb_resultado1["text"] = x-y
def multi():
    if(str(espaco.get()).isnumeric() and str(espaco2.get()) .isnumeric()):
        x = int(espaco.get())
        y = int(espaco2.get())
        lb_resultado1["text"] = x*y
def div():
     if(str(espaco.get()).isnumeric() and str(espaco2.get()) .isnumeric()):
        x = int(espaco.get())
        y = int(espaco2.get())
        lb_resultado1["text"] = x/y
def pot():
    if(str(espaco.get().isnumeric() and str(espaco2.get()).isnumeric())):
        x = int(espaco.get())
        y = int(espaco2.get())
        lb_resultado1["text"] = x ** y

begin = Tk()
begin.title('Calculadora')
begin["bg"] = "grey"
        
lb = Label(begin, text = 'Operações:')
lb.place(x=220, y=90)
        
btsoma = Button(begin, width = 20, text = '+', command = soma)
btsoma.place(x=220, y=120)
        
btsub = Button(begin, width = 20, text = '-', command = sub)
btsub.place(x=220, y=150)
        
btmulti = Button(begin, width = 20, text = '*', command = multi)
btmulti.place(x=220, y=180)
        
btdiv = Button(begin, width = 20, text = '/', command = div)
btdiv.place(x=220, y=210)

btpot = Button(begin, width = 20, text ='**', command = pot)
btpot.place(x=220,y=240)

lb_espaco = Label(begin, text='Coloque o primeiro numero no espaço:')
lb_espaco.place(x=0,y=120)
lb_espaco2 = Label(begin, text='Coloque o segundo numero no espaço:')
lb_espaco2.place(x=0,y=180)
lbcalcul1 = Label(begin, text='Operações basicas', bg='white')
lbcalcul1.pack(side=TOP, fill=X)
lb_resultado = Label(begin, text='Resultado é :')
lb_resultado1 = Label(begin, text='x')
lb_resultado.place(x=0,y=240)
lb_resultado1.place(x=80,y=240)
        
espaco = Entry(begin)
espaco.place(x=0,y=150)
espaco2 = Entry(begin)
espaco2.place(x=0, y=210)
        
begin.geometry("1024x768")
begin.mainloop()
