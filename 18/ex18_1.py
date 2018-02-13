import re
def RepresentsInt(s):
	return re.match(r"[-+]?\d+$", s) is not None

instructions = []
registers = {}
last_played = 0

with open('input') as f:
	for line in f:
		instructions.append(line.strip().split(' '))

def check_register(name):
	if name not in registers:
		registers[name] = 0
		return 0
	else:
		return registers[name]

i = 0
while i < len(instructions):
	instruction = instructions[i]
	if instruction[0] == 'snd':
		last_played = check_register(instruction[1])
		i+=1
	elif instruction[0] == 'set':
		if RepresentsInt(instruction[2]):
			registers[instruction[1]] = int(instruction[2])
		else:
			registers[instruction[1]] = check_register(instruction[2])
		i+=1
	elif instruction[0] == 'add':
		check_register(instruction[1])
		if RepresentsInt(instruction[2]):
			registers[instruction[1]] += int(instruction[2])
		else:
			registers[instruction[1]] += check_register(instruction[2])
		i+=1
	elif instruction[0] == 'mul':
		check_register(instruction[1])
		if RepresentsInt(instruction[2]):
			registers[instruction[1]] *= int(instruction[2])
		else:
			registers[instruction[1]] *= check_register(instruction[2])
		i+=1
	elif instruction[0] == 'mod':
		check_register(instruction[1])
		if RepresentsInt(instruction[2]):
			registers[instruction[1]] %= int(instruction[2])
		else:
			registers[instruction[1]] %= check_register(instruction[2])
		i+=1
	elif instruction[0] == 'rcv':
		check_register(instruction[1])
		if check_register(instruction[1]) > 0:
			print(last_played)
			break
		i+=1
	elif instruction[0] == 'jgz':
		check_register(instruction[1])
		if check_register(instruction[1]) > 0:
			if RepresentsInt(instruction[2]):
				i += int(instruction[2])
			else:
				i += check_register(instruction[2])
		else:
			i+=1