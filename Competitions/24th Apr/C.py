import sys
sys.setrecursionlimit(999999999)

def calc_choco (side : int = 4) -> int : 
    if side == 4 : return 26

    else : 
        choco_len = 2*(side) + 1 + calc_choco(side-1)
        return choco_len

for case in range(int(input())) :  
    print(calc_choco(int(input())))
