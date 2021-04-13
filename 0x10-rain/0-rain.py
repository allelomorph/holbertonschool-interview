#!/usr/bin/python3
"""0x10. Rain, task 0. Rain
"""


def rain(walls):
    """
    """
    if type(walls) is not list or not all(type(n) is int for n in walls):
        return 0

    water_units = 0
    L_wall = 0
    walls_len = len(walls)

    # stop at size - 2 since two adjacent walls can't hold water
    for i in range(0, walls_len - 2): #(i = 0; i < heightSize - 2; i++)

        if walls[i] > 0 and i >= L_wall:

            # L_wall_h = walls[i];
            print("\tL wall set {} units high at index {}".format(walls[i], i))

            # likewise, we start at L_wall + 2
            for j in range(i + 2, walls_len):

                if walls[j] >= walls[i]:

                    print("\tR wall set {} units high at index {}".format(walls[j], j))
                    print("\twater_level set at {}".format(walls[i]))
                    water_level = walls[i]

                    for k in range(i + 1, j):
                        print("\tadding {} to water_units".format(water_level - walls[k]))
                        water_units += water_level - walls[k]

                    # continue main loop as R_wall becomes L_wall
                    # print("\tnew L wall should be set {} units high at {}".format(walls[j], j))

                    L_wall = j
                    break

    return water_units
