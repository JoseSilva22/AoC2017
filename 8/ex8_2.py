import operator

ops = { "==": operator.eq, "!=": operator.ne, ">": operator.gt, ">=": operator.ge, "<": operator.lt , "<=": operator.le }
registers = {}

def op(data):
	return ops[data[1]](registers[data[0]], int(data[2]))

def main():
	max_value = 0
	with open('input') as f:
		for line in f:
			words = line.split()
			if words[0] not in registers:
				registers[words[0]] = 0
			if words[4] not in registers:
				registers[words[4]] = 0
			if words[1] == 'inc':
				if op(words[4:]):
					registers[words[0]] += int(words[2])
			else:
				if op(words[4:]):
					registers[words[0]] -= int(words[2])
			if registers[words[0]] > max_value:
				max_value = registers[words[0]]
	print(max_value)


if __name__ == "__main__":
	main()
	
