steps = 376

spinlock_buffer = [0]
pos = 0
for i in range(1, 2018):
	pos = (pos + steps) % len(spinlock_buffer)
	pos += 1
	spinlock_buffer.insert(pos, i)

print(spinlock_buffer[pos+1])