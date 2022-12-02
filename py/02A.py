#!/usr/bin/python3


with open('../data/002.txt') as data:
    score = 0
    for line in data:
        a, b = line.split(' ', 1)
        a = ord(a) - 64  # convert to int and normalise
        b = ord(b.strip()) - 87  # convert to int and normalise

        if a == b:  # draw
            score += b + 3
        elif (a == 1) and (b == 3):  # loss
            score += b
        elif (b > a):  # win
            score += b + 6
        elif (a == 3) and (b == 1):  # win
            score += b + 6
        else:  # loss
            score += b


    print(score)



