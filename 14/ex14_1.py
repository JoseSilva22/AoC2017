from collections import deque

def knot_hash(tams):
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

	return(dense_hash)

def ones(_hash):
	#z = ' '.join(format(x, 'b')[2:] for x in bytearray(_hash.encode()))
	#return z.count('1')
	v = '{:0128b}'.format(int(_hash, 16))
	return sum(map(int, v))

count = 0
for i in range(128):
	_hash = knot_hash("nbysizxe-"+str(i))
	count += ones(_hash)
print(count)