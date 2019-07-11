#!/usr/bin/python3


def island_perimeter(grid):
    """ Return the perimeter of the island from the grid

    Args:
            grid(2D array, ints): 0 repr water, 1 repr land
                                not connected diagonally
                              grid < 100
    """

    p = 0
    w = len(grid)
    h = len(grid[0])

    for i in range(w):
        for j in range(h):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    p += 1
                if i + 1 >= w or grid[i + 1][j] == 0:
                    p += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    p += 1
                if j + 1 >= h or grid[i][j + 1] == 0:
                    p += 1
    return p
