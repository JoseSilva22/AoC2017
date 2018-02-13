layers = {}
severity = 0
pos = 0

def process_line(line):
	return list(map(int, line.split(': ')))

def move_layers():
	for key in layers:
		layers[key][1] += layers[key][2]
		if layers[key][1] == layers[key][0]-1 or layers[key][1] == 0:
			layers[key][2] *= -1

def calc_severity(severity):
	if pos in layers:
		if layers[pos][1] == 0:
			severity += pos*layers[pos][0]
	return severity


with open('input') as f:
	for line in f:
		l = process_line(line)
		layers[l[0]] = [l[1], 0, 1]

num_layers = max(layers)+1


for i in range(num_layers):
	pos += 1
	move_layers()
	severity = calc_severity(severity)
	
print(severity)

