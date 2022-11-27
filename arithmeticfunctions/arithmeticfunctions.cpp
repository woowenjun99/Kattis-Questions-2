// ***Arithmetic Functions Solution***
// Difficulty: 1.7
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 61%
// CPU Time: 0.00 s
// Author: Johan Sannemo
// Source: Principles of Algorithmic Problem Solving
// Link: https://open.kattis.com/problems/arithmeticfunctions


#include "arithmeticfunctions.h"
#include <cmath>

// Compute x^3
int cube(int x){
    return std::pow(x, 3);
}

// Compute the maximum of x and y
int max(int x, int y){
    if (x > y) return x;
    return y;
}

// Compute x - y
int difference(int x, int y){
    return x - y;
}
