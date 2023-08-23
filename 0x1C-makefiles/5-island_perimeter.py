#!/usr/bin/python3
""" this contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """

    perimeter = 0

    width = len(grid)

    if grid != []:
        height = len(grid[0])

    for x in range(width):
        for y in range(height):
            if grid[x][y] == 1:
                if (x - 1) == -1 or grid[x - 1][y] == 0:
                    perimeter += 1
                if (x + 1) == width or grid[x + 1][y] == 0:
                    perimeter += 1
                if (y - 1) == -1 or grid[x][y - 1] == 0:
                    perimeter += 1
                if (y + 1) == height or grid[x][y + 1] == 0:
                    perimeter += 1

    return perimeter
