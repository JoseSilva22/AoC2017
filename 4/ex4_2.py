count = 0

with open('input', 'r') as file:
    for line in file:
        tokens = [f.strip() for f in line.split(' ')]
        if len(tokens) == len(set([''.join(sorted(item)) for item in tokens])):
        	count += 1

print(count)