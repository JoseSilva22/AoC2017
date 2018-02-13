import numpy as np

programs = {}

def dfs(graph, start):
	childs = graph[start][1]

	if not childs:
		return graph[start][0]

	childs_weights = [0 for w in range(len(childs))]

	for i in range(len(childs)):
		childs_weights[i] = dfs(graph, childs[i])

	if (len(set(childs_weights))>1):
		print(childs_weights)
		x = np.array(childs_weights)
		diff = x.max()-x.min()
		index = x.argmax()
		print(graph[childs[index]][0]-diff)
		#sair logo do programa...
	return graph[start][0]+sum(childs_weights)



with open('input') as f:
	data = []
	for line in f:
		lista = [word.strip(',') for word in line.split()]
		data.append(lista)
		programs[lista[0]] = [int(lista[1][1:-1]), lista[3:]]


dfs(programs, 'airlri') #topo da arvore, solucao do 7_1

