a = 873
b = 583
a_factor = 16807
b_factor = 48271
count = 0

for i in range(40000000):
	a = a * a_factor % 2147483647
	b = b * b_factor % 2147483647
	if a & 0xFFFF == b & 0xFFFF:
		count +=1

print(count)