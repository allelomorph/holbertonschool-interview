#!/usr/bin/python3
"""0x10. Rain, task 0. Rain
"""


def rain(walls):
    """Measures amount of "water" collected in a landscape represented by a
    list of integers, as if the elevations encountered in traversal of a
    topographical map. There is considered to be a height of 0 to the left
    and right of the list index range.

    For example, given the list walls = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
    and 'X' = land, '-' = water:
                                                 X
                                     X  -  -  -  X  X  -  X
                               X  -  X  X  -  X  X  X  X  X  X

                values:     0  1  0  2  1  0  1  3  2  1  2  1
                index:      0  1  2  3  4  5  6  7  8  9 10 11

        `walls` (list of int): list of integers representing topology
            forming lakebeds

        Return: (int) total amount of sqaure units of "water," as defined by
            widths and depths of each basin

    """
    if type(walls) is not list or not all(type(n) is int for n in walls):
        return 0

    water_units = 0
    L_wall_i = 0
    walls_len = len(walls)

    # stop at size - 2 since two adjacent walls can't hold water
    for i in range(0, walls_len - 2):

        # next wall that is non-zero height and begins new basin
        if walls[i] > 0 and i >= L_wall_i:

            # likewise, right wall must be at least 2 units from left wall
            for j in range(i + 2, walls_len):

                if walls[j] >= walls[i]:

                    # water level can only be as high as lowest wall of basin
                    water_level = walls[i]

                    for k in range(i + 1, j):
                        water_units += water_level - walls[k]

                    # right wall becomes left wall of next potential basin
                    L_wall_i = j
                    break

    return water_units
