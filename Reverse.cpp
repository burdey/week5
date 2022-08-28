//
// Created by Satori on 2022/8/26.
//

#include "Reverse.h"
string Reverse::reverseString(string letter){
    static char *newString = new char[letter.length()+1];
    reverseStringUtil(letter,0,newString);
    newString[letter.length()] = '\0';
    return newString;
}

void Reverse::reverseStringUtil(string s, int pos, char ps[]){
    if(s[pos] == '\0') {
        reverseStringUtil(s, pos + 1, ps);
        int index = s.length() - pos - 1;
        ps[index] = s[pos];
        return;
    }
}


int Reverse::reverseDigit(int value){
    if(value < 0){
        return -1;
    }
    static int newNumber = 0;
    static int multiplier = 1;
    if(value > 0){
        reverseDigit(value/10);
        newNumber += (value%10) * multiplier;
        multiplier *= 10;
    }
    return newNumber;

}
