import math

#nota dos pbl
pbl1 = float(input("digita sua primeira nota do pbl: "))
pbl2 = float(input("digite a segunda nota do pbl: "))
x = pbl1 + pbl2
x1 = x / 2
print("A sua media dos pbls é:",x1)
#nota das provas
p1 = float(input("digita a primeira nota das provas: "))
p2 = float(input("digita a segunda nota das provas: "))
y = p1 + p2
y1 = y / 2
print("A sua media das provas é:",y1)
#o resultado dos pbls multiplicado o resultado das notas
xy = x1 * y1
xy1 = math.sqrt(xy)
print("A sua média total é:",xy1)
