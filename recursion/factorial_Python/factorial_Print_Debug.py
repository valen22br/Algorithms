#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  7 16:02:34 2018

@author: valen
"""

def factorial(n):
    indent = 4 * (6-n) * " "#more indent on deeper recursion
    if n == 1:
        print(indent + "Base Case.")
        return 1
    else:
        print(indent + "Before recursice call f("+ str(n-1) + ")")
        rest = factorial(n-1)
        print(indent + "After recursive call f(" + str(n-1) + ") = ", rest)
        return n * rest
    
def main():
    print(factorial(4))
    
main()
