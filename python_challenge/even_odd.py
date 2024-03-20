#!/usr/bin/python3

'''
    This script contains function that checks if a number or an expression
    is even or odd.
    basically we are dealing with if-else statement.
'''


def check(a, b):
    summ = a + b
    if a > b:
        print(a, " is greater than ", b, " and the sum of the both is ", summ)
        print("\n")
    else:
        print(b, "is greater than ", a, "and the sum of them both is ", summ)
        print("\n")


check(20, 30)
check(800, 200)
check(1, 80)
