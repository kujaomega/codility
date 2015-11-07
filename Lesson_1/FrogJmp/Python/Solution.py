# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"
import math

def solution(X, Y, D):
    # write your code in Python 2.7
    distance = Y-X
    result = math.ceil(float(distance)/D)
    return int(result)