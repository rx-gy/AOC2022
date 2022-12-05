#!/usr/bin/python3

with open('../data/004.txt') as data:
    count = 0
    for line in data:
        a, b = line.split(',', 1)
        a1, a2 = a.split('-', 1)
        b1, b2 = b.split('-', 1)
        if (int(a1) <= int(b1)) and (int(a2) >= int(b2)):
            count += 1
        elif (int(a1) >= int(b1)) and (int(a2) <= int(b2)):
            count += 1
    print(count)

