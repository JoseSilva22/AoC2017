visited = [False for i in range(2000)]
count = 0
links = {}

def process_line(line):
	return list(map(int, line.split('<-> ')[1].split(', ')))

with open('input') as f:
	for line in f:
		neighs = process_line(line)
		links[count] = neighs
		count+=1


visited[0] = 1
to_visit = links[0]

while to_visit:
	for item in to_visit:
		visited[item] = True
		for neigh in links[item]:
			if not visited[neigh]:
				to_visit.append(neigh) 
		to_visit.remove(item)

print(sum(visited))
