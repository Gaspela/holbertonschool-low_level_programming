#!/usr/bin/python3


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    island = 0
    around = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                island += 1
                if i > 0 and grid[i-1][j] == 1:
                    around += 1
                if j > 0 and grid[i][j-1] == 1:
                    around += 1

    return (island * 4 - around * 2)
