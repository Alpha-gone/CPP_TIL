//
// Created by User on 2023-11-27.
//

#ifndef CPP_TIL_MYSTRING_H
#define CPP_TIL_MYSTRING_H


class MyString {
    char* stringContent;
    int stringLength;
    int memoryCapacity;

    public:
        explicit MyString(int capacity);
        MyString(char c);
        MyString(const char* str);
        MyString(const MyString& str);

        ~MyString();

        const int getLength();

        const void print();
        const void println();

        MyString& assign(const MyString& str);
        MyString& assign(const char* str);

        const int capacity();
        void reserve(int size);

        const char at(int index);

        MyString& insert(int loc, const MyString& str);
        MyString& insert(int loc, const char* str);
        MyString& insert(int loc, char c);

        MyString& erase(int loc, int num);

        const int find(int findFrom, MyString& str);
        const int find(int findFrom, const char* str);
        const int find(int findFrom, char c);

        const int compare(const MyString& str);

        bool operator==(MyString& str);
};


#endif //CPP_TIL_MYSTRING_H
