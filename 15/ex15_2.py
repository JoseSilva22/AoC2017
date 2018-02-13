def gA():
	a = 873
	a_factor = 16807
	while True:
		a = a * a_factor % 2147483647
		if a % 4 == 0:
			yield a

def gB():
	b = 583
	b_factor = 48271
	while True:
		b = b * b_factor % 2147483647
		if b % 8 == 0:
			yield b

A = gA()
B = gB()
count = 0
for i in range(5000000):
	a = next(A)
	b = next(B)
	if a & 0xFFFF == b & 0xFFFF:
		count +=1

print(count)