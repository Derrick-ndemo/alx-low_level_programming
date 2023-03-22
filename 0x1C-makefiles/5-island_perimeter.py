#!/usr/bin/python3

def island_perimeter(grid):
    """
    Function that returns perimeter of the island as described in the 
    grid

    Args:
        grid(list of list of int): List of all intagers

    Returns:
        The perimeter (int) of the island

    Raises:
        valueError: if the input grid is not rectangular or has more than one island

        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically(not diagonally)
    - Grid is completely surrounded by water, and there is one island(or nothing)
    - The island dosen't have 'lakes'(water inside isn't connected to the water around the island)
    """
    # Check the input grid
    if not grid or not all(isinstance(row, int)) and len(row) == len(grid[0]) for row in grid:
        raise ValueError("Input grid is not rectangular")
    if sum(row.count(1) for row in grid) != 1:
        raise ValueError("Input grid has more than one island")

    # Find the coordinates of the first land cell (there must be one)
    n, m = len(grid), len(grid[0])
    i, j = next((i, j) for i in range(n) for j in range(m) if grid[i][j] == 1)

    # Compute the perimeter of the island using DFS
    def dfs(i, j):
        nonlocal perimeter
        if i < 0 or i >= n or j < 0 or j >= m or grid[i][j] == 0:
            perimeter += 1  # found a water cell or reached the border
            return
        if grid[i][j] == -1:
            return  # already visited this cell
        grid[i][j] = -1  # mark as visited
        dfs(i-1, j)  # north
        dfs(i+1, j)  # south
        dfs(i, j-1)  # west
        dfs(i, j+1)  # east

    perimeter = 0
    dfs(i, j)
    return perimeter
