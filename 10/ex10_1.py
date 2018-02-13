from collections import deque

tams = [97,167,54,178,2,11,209,174,119,248,254,0,255,1,64,190]
lista = [i for i in range(256)]
pos = 0
skip = 0

for tam in tams:
	if tam > 1 and (pos + tam) <= 256:
		lista[pos:pos+tam] = list(reversed(lista[pos:pos+tam]))
	elif tam > 1 and (pos + tam) > 256:
		lista2 = deque(lista)
		rots = (pos+tam)%256
		lista2.rotate(-rots)
		lista = list(lista2)
		lista[pos-rots:pos-rots+tam] = list(reversed(lista[pos-rots:pos-rots+tam]))
		lista2 = deque(lista)
		lista2.rotate(rots)
		lista = list(lista2)
	
	pos = (pos + tam + skip) % 256
	skip += 1	

print(lista[0]*lista[1])