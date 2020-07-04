#!/usr/bin/python3
""" PERIMETER OF A ISLAND"""


def island_perimeter(grid):
    """
    function def island_perimeter(grid):
    that returns the perimeter of the island described in grid
    """
    parameter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):

            if grid[i][j] == 1:

                up, down, prev, nextt = 1, 1, 1, 1

                if i != 0:
                    up = grid[i - 1][j]
                if i + 1 != len(grid):
                    down = grid[i+1][j]
                if j != 0:
                    prev = grid[i][j-1]
                if j + 1 != len(grid[i]):
                    nextt = grid[i][j+1]

                if up == 0:
                    parameter += 1
                if down == 0:
                    parameter += 1
                if prev == 0:
                    parameter += 1
                if nextt == 0:
                    parameter += 1

    return parameter
