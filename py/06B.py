#!/usr/bin/python3

with open('../data/006.txt') as data:
    t = data.readline()

    for i in range(14, len(t)):
        if len(set(t[i-14:i])) == 14:
            print(i)
            exit()
