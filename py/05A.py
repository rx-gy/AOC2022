#!/usr/bin/python3
stackwidth = 9
stackheight = 8
with open('../data/005.txt') as data:
    stack = [[], [], [], [], [], [], [], [], []]
    for i in range(stackheight):
        line = data.readline()
        for j in range(stackwidth):
            val = line[1 + j*4]
            if val != ' ':
                stack[j].append(val)

    for i in range(stackwidth):
        stack[i].reverse()

    data.readline()  # get rid of unnecessary lines
    data.readline()

    print(stack)

    for line in data:
        line = line.lstrip('move ')
        line = line.replace('from ', '')
        line = line.replace('to ', '')

        a, b, c = line.split(' ')
        a = int(a)
        b = int(b) - 1
        c = int(c) - 1

        substack = stack[b][-a:]
        substack.reverse()
        stack[c].extend(substack)
        del stack[b][-a:]

    print(stack)
    for substack in stack:
        print(substack[-1])
