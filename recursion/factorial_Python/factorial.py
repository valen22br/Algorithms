#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  7 16:02:34 2018

@author: valen
"""

def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n-1)
    
def main():
    print(factorial(12))
    
main()
