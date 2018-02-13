import numpy as np
from numpy import genfromtxt

data = genfromtxt('input', dtype=int, delimiter='\t')
data = np.sort(data)

count = 0
for line in data:
	for i in range(1, len(line)):
		for j in range(i):
			if (line[i]%line[j]) == 0:
				count += (line[i] / line[j])

print(count)