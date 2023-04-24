import math

for case_idx in range(int(input())) :  

    len = int(input())
    case = input()

    check = set()
    prev = " "

    flag = "YES"

    for test in case: 
        if test in check and test != prev : 
            flag = "NO"
            break
        else:
            check.add(test)

        prev = test
        
    print(flag)