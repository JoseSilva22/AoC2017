import numpy as np

data = np.array([14,0,15,12,11,11,3,5,1,6,8,4,9,1,8,4])
iteration = 0
sequences = {}
sequences[str(data)] = iteration

while True:
	max_value = data.max()
	max_index = data.argmax()
	data[max_index] = 0

	for i in range(1,max_value+1):
		data[(max_index+i)%16] += 1

	iteration += 1
	s = str(data)
	if s in sequences:
		break
	else:
		sequences[s] = iteration

print(iteration - sequences[str(data)])