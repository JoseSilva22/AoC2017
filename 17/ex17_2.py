steps = 376

len_spinlock_buffer = 1
pos = 0
pos_0 = 0
value = 0
for i in range(1, 50000001):
	pos = (pos + steps) % len_spinlock_buffer
	pos += 1
	len_spinlock_buffer += 1
	if pos <= pos_0:
		pos_0 += 1
	if pos - pos_0 == 1:
		value = i
print(value)