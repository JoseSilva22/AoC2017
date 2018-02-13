visited = [False for i in range(2000)]
count = 0
links = {}
groups = 0

def process_line(line):
	return list(map(int, line.split('<-> ')[1].split(', ')))

with open('input') as f:
	for line in f:
		neighs = process_line(line)
		links[count] = neighs
		count+=1


to_visit=[]

for i in range(2000):
	if visited[i] == False:
		visited[i] = True
		for neigh in links[i]:
			if not visited[neigh]:
				to_visit.append(neigh) 
		

		while to_visit:
			for item in to_visit:
				visited[item] = True
				for neigh in links[item]:
					if not visited[neigh]:
						to_visit.append(neigh) 
				to_visit.remove(item)

		groups+=1

print(groups)

