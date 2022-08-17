#!/usr/bin/python3
""" 5-island_perimeter.py - island_preimeter """


def island_perimeter(grid):
    """
    RETURN:
         the perimeter of the island
    """

    k = 0
    y = 0
    x = 0
    endpoint = 0


    for i in grid:
        for j in range(1, len(i)):
            if k == j:
                y += 1
            if i[j] == 1:
                k = j
                if i[j + 1] == 1:
                    x += 1
                    
            """if i[endpoint] != 1:
                x += 1
                y += 1"""

    pre = 2 * (x + 1 + y)  
    return pre
