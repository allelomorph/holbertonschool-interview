#!/usr/bin/python3
def canUnlockAll(boxes):

    if (len(boxes) == 0):
        return True

    keys = set()
    new_keys = set(boxes[0])

    # while new keys can still be found
    while (len(new_keys)):

        # add new keys to ring
        keys = keys | new_keys
        new_keys = set()

        # check keyring for intersection with solution: set { 1..<last box #> }
        if (keys & set(range(1, len(boxes))) == set(range(1, len(boxes)))):
            return True

        # use current keyring to get a new round of keys
        for x in keys:
            # index protection for keys that have no boxes
            if (x < len(boxes)):
                # open box, add keys
                for y in boxes[x]:
                    if y not in keys:
                        new_keys.add(y)

    return False
