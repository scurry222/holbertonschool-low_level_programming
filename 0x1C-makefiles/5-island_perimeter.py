#!/usr/bin/python3


def island_perimeter(grid):
    """ Return the perimeter of the island from the grid

    Args:
            grid(2D array, ints): 0 repr water, 1 repr land
                                not connected diagonally
                              grid < 100
    """

    p = 0
    h = len(grid)
    w = len(grid[0])

    for x in range(h):
        for y in range(w):
            if grid[x][y] == 1:
                if x - 1 < 0 or grid[x - 1][y] == 0:
                    p += 1
                if x + 1 >= w or grid[x + 1][y] == 0:
                    p += 1
                if y - 1 < 0 or grid[x][y - 1] == 0:
                    p += 1
                if y + 1 >= h or grid[x][y + 1] == 0:
                    p += 1
    return p
