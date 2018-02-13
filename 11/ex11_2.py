from collections import Counter

with open('input') as f:
    line = f.readline()
route = line.split(",")


def cancel(dir1,dir2):
    canceled = min(directions[dir1],directions[dir2])
    directions[dir1] -= canceled
    directions[dir2] -= canceled
    return canceled

max_dist = 0

for i in range(1,len(route)+1):
    done = False
    directions = Counter(route[:i])

    while not done:
        length = sum(directions.values())

        # Cancel opposing directions
        cancel('n','s')
        cancel('sw','ne')
        cancel('se','nw')

        directions['n'] += cancel('ne','nw')
        directions['ne'] += cancel('se','n')
        directions['se'] += cancel('ne','s')
        directions['s'] += cancel('se','sw')
        directions['sw'] += cancel('s','nw')
        directions['nw'] += cancel('n','sw')

        new_length = sum(directions.values())
        done = (length == new_length)

    max_dist = max(max_dist, length)
print(max_dist)