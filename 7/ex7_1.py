programs = {}

with open('input') as f:
	data = []
	for line in f:
		lista = [word.strip(',') for word in line.split()]
		data.append(lista)
		programs[lista[0]] = 0

for i in range(len(data)):
	tam = len(data[i])
	if tam > 2:
		for j in range(3, tam):
			programs[data[i][j]] = 1

for key, value in programs.items():
	if 0 == value:
		print (key)