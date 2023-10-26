#!/usr/bin/python3
""" island perimeter module """


def next_row_free(row, row_num, grid, i):
    """ checks if the next row in the grid is free """
    if row_num < len(grid) - 1:
        next_row = grid[row_num + 1]
        if not next_row[i]:
            return True


def prev_row_free(row, row_num, grid, i):
    """ checks if the prev row in the grid is free """
    if row_num:
        next_row = grid[row_num - 1]
        if not next_row[i]:
            return True


def is_land(row, row_num, grid):
    """
        checks if an area is land or water
    """
    perimeter = 0
    lenr = len(row)
    for i in range(lenr):
        if row[i]:
            if not row_num or row_num == len(grid) - 1:
                perimeter += 1
 
            if not i or i == lenr - 1:
                perimeter += 1

            if i and not row[i - 1]:
                perimeter += 1

            if lenr > 1 and i and i < lenr - 2:
                if not row[i + 1]:
                    perimeter += 1

            if prev_row_free(row, row_num, grid, i):
                perimeter += 1

            if next_row_free(row, row_num, grid, i):
                perimeter += 1
    return perimeter


def island_perimeter(grid):
    """
        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    """
    i = 0
    perimeter = 0
    for row in grid:
        perimeter += is_land(row, i, grid)
        i += 1
    return perimeter
