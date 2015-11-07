// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <numeric>
//include max values of numeric classes
#include <limits>
// include abs value
#include <cmath> 
#include <vector>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(std::vector<int> &A) {
    // write your code in C++11
    int size = A.size();
    int sum_of_elems = std::accumulate(A.begin(), A.end(), 0);
    int sum_left = 0;
    int minimum_sum = std::numeric_limits<int>::max();
    for(int i=0; i<size-1; ++i)
    {
        sum_left += A.at(i);
        int actual_sum = std::abs(sum_left - (sum_of_elems-sum_left));
        if( actual_sum<minimum_sum)
        {
            minimum_sum = actual_sum;
            
        }
        
    }
    return minimum_sum;
}