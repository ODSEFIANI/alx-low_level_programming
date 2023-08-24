#!/usr/bin/python3
""" doc island """

def island_perimeter(grid):
    """documentation"

    Vcounter = 0
    hcounter = 0

    # Counting horizontally
    for row in range(len(grid) -1):
        for column in range(len(grid[row])-1):
            if grid[row][column] == 1 and (grid[row][column +1] ==1 or grid[row ][column - 1] ==1):
                hcounter = hcounter + 1

    # Counting vertically
    for row in range(len(grid ) -1):
        for column in range(len(grid[row])-1):
            if grid[row][column] == 1 and (grid[row +1][column] ==1 or grid[row -1][column] ==1):
                Vcounter = Vcounter + 1
           

    return 2 *  (Vcounter + hcounter)
