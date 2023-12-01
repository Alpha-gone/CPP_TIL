//
// Created by User on 2023-11-27.
//

#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int capacity) {
    stringContent = new char [capacity];
    stringLength = 0;
    memoryCapacity = capacity;
}

MyString::MyString(char c) {
    stringContent = new char [1];
    stringContent[0] = c;
    stringLength = 1;
}

MyString::MyString(const char *str) {
    stringLength = strlen(str);
    stringContent = new char [stringLength];

    for (int i = 0; i < stringLength; i++) {
        stringContent[i] = str[i];
    }
}

MyString::MyString(const MyString &str) {
    stringLength = str.stringLength;
    stringContent = new char [stringLength];

    for (int i = 0; i < stringLength; i++) {
        stringContent[i] = str.stringContent[i];
    }
}

MyString::~MyString(){
    delete[] stringContent;
}

const int MyString::getLength(){
    return stringLength;
}

const void MyString::print() {
    for(int i = 0; i < stringLength; i++){
        std::cout << stringContent[i];
    }
}

const void MyString::println() {
    print();

    std::cout << std::endl;
}

MyString& MyString::assign(const MyString& str) {
    if(str.stringLength > memoryCapacity) delete[] stringContent;

    stringLength = str.stringLength;
    stringContent = new char[stringLength];
    memoryCapacity = stringLength;

    for (int i = 0; i < stringLength; i++) stringContent[i] = str.stringContent[i];

    return *this;
}

MyString& MyString::assign(const char *str) {
    int tmpLength = strlen(str);

    if (tmpLength > memoryCapacity) delete[] stringContent;

    memoryCapacity = tmpLength;
    stringLength = tmpLength;
    stringContent = new char [stringLength];

    for (int i = 0; i < stringLength; i++) stringContent[i] = str[i];

    return *this;
}

const int MyString::capacity() {
    return memoryCapacity;
}

void MyString::reserve(int size) {
    if (size > memoryCapacity){
        char *prevStringContent = stringContent;

        stringContent = new char[size];
        memoryCapacity = size;

        for (int i = 0; i < stringLength; i++) stringContent[i] = prevStringContent[i];

        delete[] prevStringContent;
    }
}

const char MyString::at(int index){
    if (stringLength <= index || index < 0){
        return '\0';
    }else{
        return stringContent[index];
    }
}

MyString& MyString::insert(int loc, const MyString &str) {
    if (loc < 0 || loc > stringLength) return *this;

    if (stringLength + str.stringLength > memoryCapacity){

        if (memoryCapacity * 2 > stringLength + str.stringLength) memoryCapacity *= 2;
        else memoryCapacity = stringLength + str.stringLength;

        char* prevStringContent = stringContent;
        stringContent = new char [memoryCapacity];

        int i;
        for (i = 0; i < loc; i++) stringContent[i] = prevStringContent[i];

        for (int j = 0; j < str.stringLength; j++) stringContent[i + j] = str.stringContent[j];

        for (; i < stringLength; i++) stringContent[str.stringLength + i] = prevStringContent[i];

        delete[] prevStringContent;
    }else{
        for (int i = stringLength; i >= loc; i--) stringContent[i + str.stringLength] = stringContent[i];

        for (int i = 0; i < str.stringLength; ++i) stringContent[i + loc] = str.stringContent[i];
    }

    stringLength += str.stringLength;
    return *this;
}

MyString& MyString::insert(int loc, const char *str) {
    MyString tmp(str);
    return insert(loc,tmp);
}

MyString& MyString::insert(int loc, char c) {
    MyString tmp(c);
    return insert(loc,tmp);
}

MyString& MyString::erase(int loc, int num) {
    if (loc < 0 || loc > stringLength) return *this;

    for (int i = loc + num; i < stringLength; i++){
        stringContent[i - num] = stringContent[i];
    }

    stringLength -= num;
    return *this;
}

const int MyString::find(int findFrom, MyString &str) {
    int i, j;

    if (str.stringLength == 0) return -1;

    for (i = findFrom;  i<= stringLength - str.stringLength; i++) {
        for (j = 0; j < str.stringLength; j++) {
            if (stringContent[i + j] != str.stringContent[j]) break;
        }

        if (j == str.stringLength) return i;
    }

    return -1;
}

const int MyString::find(int findFrom, const char *str) {
    MyString tmp(str);
    return find(findFrom, tmp);
}

const int MyString::find(int findFrom, char c){
    MyString tmp(c);
    return find(findFrom, tmp);
}

const int MyString::compare(const MyString &str) {
    for (int i = 0; i < std::min(stringLength, str.stringLength); i++) {
        if (stringContent[i] > str.stringContent[i]) return 1;
        else if (stringContent[i] < str.stringContent[i]) return -1;
    }

    if (stringLength == str.stringLength) return 0;
    else if (stringLength > str.stringLength) return 1;
    else return -1;
}

bool MyString::operator==(MyString &str) {
    return !compare(str);
}