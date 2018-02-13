with open('input') as f:
	data = []
	for line in f:
		data.append(int(line))

count = 0
index = 0
max_value = len(data)

while (index < max_value):
	temp = index + data[index]
	if data[index] < 3:
		data[index] += 1
	else:
		data[index] -= 1
	index = temp
	count +=1

print(count)
