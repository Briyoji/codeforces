import math

for case in range(int(input())) :  

    len = int(input())

    array = [int(val) - idx for idx, val in enumerate(input().split())]


    counter = dict()

    for val in array : 
        if val in counter : counter[val] += 1
        else : counter[val] = 1

    pair_sum = 0

    for val in counter:
        pair_sum += math.comb(counter[val], 2)

    print(pair_sum)
