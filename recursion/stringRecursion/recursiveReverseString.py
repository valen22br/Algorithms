#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  7 15:14:32 2018

@author: valen
"""

def recursiveReverseString(a_str):
    print("Got as an argument: " + a_str)
    lengthStr = len(a_str)
    #base case
    if lengthStr == 1:
        print("Base Case!")
        return a_str;
    else:
        cutStr = recursiveReverseString(a_str[1:]) + a_str[0]
        print("Reassembling {} and {} into {}.".format(a_str[1:], a_str[0], cutStr))
        return cutStr
    
def main():
    myString = "Gustavo"
    print("Original Sring: "+ myString)
    print("Reversed String: " + recursiveReverseString(myString))
    
main()
