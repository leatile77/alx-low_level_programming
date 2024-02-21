#1/usr/bin/python3
"""Defines a function that measures an islands perimeter."""
def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.
    
    - 0 represents water zone
    - 1 represents land zone

    Args:
    grid (list): A list of integers.
    Returns:
    Perimeter of island defined in grid
    """
    height = len(grid)
    width = len(grid[0])
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1

    return (size * 4) - (edge * 2)
