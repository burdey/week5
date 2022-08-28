//
// Created by Satori on 2022/8/26.
//

#ifndef WEEK4_REVERSE_H
#define WEEK4_REVERSE_H
#include <string>
#include <iostream>
#include <conio.h>
#include <sstream>
#include <math.h>
using namespace std;

class Reverse{
public:
    string reverseString(string str1);
    int reverseDigit(int value);
    void reverseStringUtil(string s, int pos, char ps[]);
};

#endif //WEEK4_REVERSE_H
