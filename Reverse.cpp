//
// Created by Satori on 2022/8/26.
//

#include "Reverse.h"

#include "Reverse.h"

string Reverse::reverseString(string str1){
    size_t number_characters= str1.size();
    if(number_characters== 1)
        return str1;
    else{
        return str1[number_characters- 1]+reverseString(str1.substr(0, number_characters- 1));
    }
}

int Reverse::reverseDigit(int value){
    if(value<10) {return value;}
    int len=0;
    for (int i=value; i; i/=10) len++;
    return value%10*(int)pow(10, len-1) + reverseDigit(value/10);

}

