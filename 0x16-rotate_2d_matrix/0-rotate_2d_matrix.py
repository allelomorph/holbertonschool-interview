#!/usr/bin/python3
""" 0x16. Rotate 2D Matrix task 0. Rotate 2D Matrix """


def rotate_2d_matrix(matrix):
    """Transposes values in a 2 dimensional matrix of integers as if the
    entire matrix was rotated 90 degrees clockwise.

    Args:
        matrix: (list) of (list) of (int), matrix to be rotated

    """
    if (type(matrix) is not list or
            not all(type(row) is list for row in matrix)):
        return

    """
    Pythonic approach via zip: * operator causes members of matrix to be passed
    as multiple parameters to zip, and [::-1] reverses row order once zipped.
    """
    rotated = [list(row)[::-1] for row in zip(*matrix)]

    for y in range(len(matrix)):
        for x in range(len(matrix[0])):
            matrix[y][x] = rotated[y][x]

    """
    For a more language-agnostic approach, the matrix values could be
    transposed in the following manner:

    size = len(matrix)
    layer_count = size // 2

    for layer in range(0, layer_count):
        first = layer
        last = size - first - 1

        for element in range(first, last):
            offset = element - first

            top = matrix[first][element]
            right_side = matrix[element][last]
            bottom = matrix[last][last - offset]
            left_side = matrix[last - offset][first]

            matrix[first][element] = left_side
            matrix[element][last] = top
            matrix[last][last - offset] = right_side
            matrix[last - offset][first] = bottom
    """
