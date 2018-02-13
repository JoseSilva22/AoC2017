import math 

num = 325489

side = math.ceil(math.sqrt(num))

if (side % 2) == 1: #os quadrados sao quadrados de numeros impares
	side -= 1

ampl = side//2 #minimo de steps possiveis, linha reta para o centro (1)

dist = abs((num-1) % side - ampl)
print(dist+ampl) 
