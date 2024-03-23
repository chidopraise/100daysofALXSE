#!/usr/bin/python3

'''
    This script contains a function named leap_year.
    And leay_year checks if a year is a leap year or not.
'''


def leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        print(year, "is a leap year")
    else:
        print(year, "is not a leap year")


leap_year(2030)
leap_year(2024)
leap_year(2000)
leap_year(1997)
leap_year(2014)
