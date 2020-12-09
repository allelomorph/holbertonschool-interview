#!/usr/bin/python3
def canUnlockAll(boxes):
    keys = set()
    new_keys = set(boxes[0])

    # while new keys can still be found
    while (len(new_keys)):

        # add new keys to ring
        keys = keys | new_keys
        new_keys = set()

        # two possible solutions, given that box 0 is always unlocked
        if (keys == set(range(len(boxes))) or keys == set(
                range(1, len(boxes)))):
            return True

        # use current keyring to get a new round of keys
        for x in keys:
            for key in boxes[x]:
                if key not in keys:
                    new_keys.add(key)

    return False
