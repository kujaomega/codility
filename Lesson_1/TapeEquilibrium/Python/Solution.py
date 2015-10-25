# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"
import sys

def solution(A):
    # write your code in Python 2.7
    total_sum = sum(A)
    size = len(A)
    min_result = sys.maxint
    sum_left = 0
    for i in range (0, size-1):
        sum_left += A[i]
        result = abs(sum_left-(total_sum-sum_left))
        
        if result<min_result:
            min_result = result
    return min_result