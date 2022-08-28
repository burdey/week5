//
// Created by Satori on 2022/8/26.
//

#ifndef WEEK4_REVERSE_H
#define WEEK4_REVERSE_H
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Reverse {
public:
    int reverseUtilDigit(int n);
    int reverseDigit(int value);
    string reverseStringUtil(string str, int size);
    string reverseString(string letters);
};
#endif //WEEK4_REVERSE_H