#!/usr/bin/python3

with open('../data/006.txt') as data:
    t = data.readline()

    for i in range(4, len(t)):
        if len(set(t[i-4:i])) == 4:
            print(i)
            exit()
