#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  7 15:39:24 2018

@author: valen
"""

def fibonacci(n):
    #base case
    if (n == 0 or n == 1):
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
    
def main():
    print(fibonacci(4))
    
main()
