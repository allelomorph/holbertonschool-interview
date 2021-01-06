#!/usr/bin/python3
"""
0x03. Minimum Operations - dertimines minimum number of "copy all"/"paste"
operations to produce `n` number characters starting from 1.
"""


def minOperations(n):

    # can't check == NaN
    if (n < 0 or n == float('inf') or n == float('-inf')):
        return 0

    # n == 1 returns 0 steps as it is the starting state
    minOps = 0

    # within the potential factors of n, aside from 1
    for i in range(2, (n + 1)):
        # for each factor found
        while (n % i == 0):
            # add that to the total operations
            minOps += i
            # refocus to consider the remainder unprinted
            n /= i

    return minOps
