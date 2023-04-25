for case in range(int(input())) :  
    constraints = [int(temp) for temp in input().split()]
    durations = [int(temp) for temp in input().split()]
    ent_values = [int(temp) for temp in input().split()]

    max_ent, video = 0, -1

    for idx in range (constraints[0]) :
        if constraints[1] <= 0 : break
        if durations[idx] <= constraints[1] and ent_values[idx] > max_ent : 
            max_ent = ent_values[idx]
            video = idx + 1

        constraints[1] -= 1

    print (video)

