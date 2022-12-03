#!/usr/bin/python3


with open('../data/001.txt') as data:
    elfcount = 0
    max_cals = [[0, 0], [0, 0], [0, 0]]
    temp_cal = 0

    for line in data:
        if line == '\n':
            elfcount += 1
            if temp_cal > max_cals[0][0]:
                max_cals[2][0] = max_cals[1][0]
                max_cals[2][1] = max_cals[1][1]
                max_cals[1][0] = max_cals[0][0]
                max_cals[1][1] = max_cals[0][1]
                max_cals[0][0] = temp_cal
                max_cals[0][1] = elfcount
            elif temp_cal > max_cals[1][0]:
                max_cals[2][0] = max_cals[1][0]
                max_cals[2][1] = max_cals[1][1]
                max_cals[1][0] = temp_cal
                max_cals[1][1] = elfcount
            elif temp_cal > max_cals[2][0]:
                max_cals[2][0] = temp_cal
                max_cals[2][1] = elfcount
            temp_cal = 0

        else:
            temp_cal += int(line)

    print(max_cals[0][0] + max_cals[1][0] + max_cals[2][0])
