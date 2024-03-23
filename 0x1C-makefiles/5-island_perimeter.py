#!/usr/bin/python3
"""This module solves for the  perimeter of an island"""


def adjucency_calculator(grid, i, j):
    """Determines adjucency cell types"""
    x = 0
    if i <= 0 or not grid[i - 1][j]:
        x += 1
    if j <= 0 or not grid[i][j - 1]:
        x += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        x += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        x += 1
    return x


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                p += adjucency_calculator(grid, i, j)

    return p
