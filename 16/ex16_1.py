programs = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']

with open('input') as f:
	data = f.readline().split(',')

for move in data:
	if move[0] == 's':
		ix = int(move[1:])
		if ix > 1:
			programs = programs[-ix:]+programs[:-ix]
		else:
			programs = list(programs[-ix:])+programs[:-ix]
	else:
		if move[0] == 'x':
			i, j = map(int, move[1:].split('/'))
			programs[i], programs[j] = programs[j], programs[i]
		else:
			a, b = move[1:].split('/')
			ix_a, ix_b = programs.index(a), programs.index(b)
			programs[ix_a], programs[ix_b] = programs[ix_b], programs[ix_a]

print(programs)
			