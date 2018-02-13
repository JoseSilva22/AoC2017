from collections import deque

#tams = "97,167,54,178,2,11,209,174,119,248,254,0,255,1,64,190"
tams = "nbysizxe"
tams = [ord(i) for i in tams]
suffix = [17, 31, 73, 47, 23]
tams = tams + suffix

lista = [i for i in range(256)]
pos = 0
skip = 0

for x in range(64):
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

dense_hash = ""
for i in range(16):
	res = 0
	for j in range(16):
		res ^= lista[16*i+j]
	dense_hash += '{0:02x}'.format(res)

print(dense_hash)