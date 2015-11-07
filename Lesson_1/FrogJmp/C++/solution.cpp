// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <math.h> 

int solution(int X, int Y, int D) {
    // write your code in C++11
    unsigned int distance = Y-X;
    int result = ceil(double(distance)/D);
    return result;
}