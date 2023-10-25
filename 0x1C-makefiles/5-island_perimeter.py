#!/usr/bin/python3
""" scribt for Island Perimeter"""


def island_perimeter(grid):
    """that returns the perimeter of the island described in grid: """
    perimeter = 0
    rows = len(grid)
    colums = len(grid[0])

    for row in range(rows):
        for colum in range(colums):
            if grid[row][colum] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][colum] == 1:
                    perimeter -= 1
                if row < (rows - 1) and grid[row + 1][colum] == 1:
                    perimeter -= 1
                if colum > 0 and grid[row][colum - 1] == 1:
                    perimeter -= 1
                if colum < colums - 1 and grid[row][colum + 1] == 1:
                    perimeter -= 1
    return perimeter
