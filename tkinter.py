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

begin = Tk()
begin.title('Janela principal')
begin["bg"] = "black"
        
lb = Label(begin, text = 'Operações:')
lb.place(x=450, y=100)
        
btsoma = Button(begin, width = 20, text = 'Soma', command = soma)
btsoma.place(x=450, y=150)
        
btsub = Button(begin, width = 20, text = 'Subtração', command = sub)
btsub.place(x=450, y=180)
        
btmulti = Button(begin, width = 20, text = 'Multi', command = multi)
btmulti.place(x=450, y=210)
        
btdiv = Button(begin, width = 20, text = 'Div', command = div)
btdiv.place(x=450, y=240)
        
lb_espaco = Label(begin, text='Coloque o numero no espaço:')
lb_espaco.place(x=630,y=120)
lb_espaco2 = Label(begin, text='Coloque o outro numero no espaço:')
lb_espaco2.place(x=630,y=180)
lb_resultado = Label(begin, text='Resultado é :')
lb_resultado1 = Label(begin, text='x')
lb_resultado.place(x=630,y=240)
lb_resultado1.place(x=700,y=240)
        
espaco = Entry(begin)
espaco.place(x=650,y=150)
espaco2 = Entry(begin)
espaco2.place(x=650, y=210)
        
begin.geometry("1024x768")
        


begin.mainloop()
