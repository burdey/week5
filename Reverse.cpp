//
// Created by Satori on 2022/8/26.
//

#include "Reverse.h"


int Reverse::reverseUtilDigit(int value){
    int digit = (int) log10(value);
    if(value < 0) {
        return -1;
    }
    else if(value == 0) {
        return 0;
    }
    return ((value % 10 * pow(10, digit)) + reverseUtilDigit(value / 10));
}

int Reverse::reverseDigit(int value){
    int rev = reverseUtilDigit(value);
    string reversed = to_string(rev);
    for(int i = 0; i < reversed.length() - 1; i++){
        if(reversed[i] == '0' && reversed[i + 1] != '0') {
            reversed[i] = '\0';
        }
    }
    return stod(reversed);
}

string Reverse::reverseStringUtil(string str ,int size){
    if (size == -1) {
        return "";
    }
    else{
        char a;
        a=str[size];
        if (' ' == a ){
            return reverseStringUtil(str,size-1);
        }
        else {
            return a + reverseStringUtil(str, size - 1);
        }
    }
}

string Reverse::reverseString(string letters){
    string rev = reverseStringUtil(letters, letters.length());
    return (rev);
}

