#!/usr/bin/python3


def canUnlockAll(boxes):
    keys = [0]

    for key in keys:
        for new in boxes[key]:
            if new not in keys and new < len(boxes):
                keys.append(new)
    if len(keys) == len(boxes):
        return True
    return False
