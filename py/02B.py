#!/usr/bin/python3


with open('../data/002.txt') as data:
    score = 0
    for line in data:
        a, b = line.split(' ', 1)
        a = ord(a) - 64  # convert to int and normalise
        b = ord(b.strip()) - 87  # convert to int and normalise

        if b == 1:
            score += (a - 1) if a > 1 else 3
        elif b == 2:
            score += a + 3
        elif b == 3:
            score += 6 + ((a + 1) if a < 3 else 1)

    print(score)



