for case in range(int(input())) :  
    length = int(input())
    arr = sorted([int(temp) for temp in input().split()])

    prod_1 = arr[0] * arr [1]
    prod_2 = arr[length - 1] * arr [length - 2]

    print(max([prod_1, prod_2]))