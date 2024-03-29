#!/usr/bin/python3
"""Function that calculates the perimeter of a given grid"""


def island_perimeter(grid):
    """
    Find the length and width of land area
    0 means water and 1 means land
    Add them and multiply by two
    Return the perimeter
    """
    perimeter = 0

    if not grid:
        return perimeter

    row = len(grid)
    col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter
