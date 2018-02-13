layers = {}

def process_line(line):
	return list(map(int, line.split(': ')))

def calc_pos(depth, pos, delay):
	return (pos+delay) % (2 * depth - 2) 

with open('input') as f:
	for line in f:
		l = process_line(line)
		layers[l[0]] = l[1]


finished = False
caught = False
delay = 0

while not finished:
	caught = False
	for key in layers:
		if calc_pos(layers[key], key, delay) == 0:
			caught = True
			break
	if caught:
		delay += 1
	else:
		finished = True

print(delay)

#3830344