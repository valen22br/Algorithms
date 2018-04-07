#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  7 16:14:53 2018

@author: valen
"""

from turtle import *

def branch(length, level):
    #print("step")
    if level <0: #base case
        return 
    forward(length)
    left(45)
    branch(0.6 * length, level-1) # recursice case: left branch
    right(90)
    branch(0.6 * length, level-1)
    left(45)
    backward(length)
    
    
def main():
    left(90)
    branch(100,5)



main()
