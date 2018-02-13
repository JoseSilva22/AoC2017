with open('input') as f:
    data = f.read()

count = 0
size = len(data)

for i in range(size):
	if data[i] == data[(i+int(size/2))%size]:
		count += int(data[i])

print(count)
