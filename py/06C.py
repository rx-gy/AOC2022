#!/usr/bin/python3

with open('../data/006.txt') as data:
    t = data.readline()
    buflen = 4
    print(min(set([(12345678,i)[(len(set(t[i-buflen:i])) == buflen)] for i in range(len(t))])))
