#!/usr/bin/python3
""" operations """


def minOperations(n):
    """ function """
    aux, tmp, tot = 2, n, 0

    while tmp >= aux:
        if tmp % aux == 0:
            tot += aux
            tmp /= aux
        else:
            aux += 1
    return tot
