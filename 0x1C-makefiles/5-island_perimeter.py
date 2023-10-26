#!/usr/bin/python3
""" island perimeter module """


def perimeter(length, breadth):
    """
        arithmetic formulation of perimeter
        of a rectangle
    """
    return 2 * (length + breadth)


def is_land(row, row_num):
    """
        checks if an area is land or water
    """
    length = 0
    breadth = 0
    for i in range(len(row)):
        if (not row_num and row[i]) or (i and row[i - 1] and row[i]):
            breadth += 1
        if row[i] and not breadth:
            length += 1
            breadth += 1 if i < len(row) - 2 and row[i + 1] else 0
    return (length, breadth)


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
    length = 0
    breadth = 0
    for row in grid:
        tup = is_land(row, i)
        length += tup[0]
        breadth += tup[1]
        i += 1
    breadth = length if length == 1 else breadth
    return perimeter(length, breadth)
