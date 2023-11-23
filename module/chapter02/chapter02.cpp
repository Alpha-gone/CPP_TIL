//
// Created by User on 2023-11-22.
//
#include <iostream>

void changeValUsingPointer(int *p){
    *p = 3;
}

void usingPointer(){
    int num = 5;

    std::cout << num << std::endl;
    changeValUsingPointer(&num);
    std::cout << num << std::endl;
}

void usingReference(){
    int a = 3;
    int& anotherA = a;

    anotherA = 5;

    std::cout << "a : " << a << std::endl
              << "anotherA : " << anotherA << std::endl;
}

void changeValUsingReference(int &p){
    p = 3;
}

void functionArgsUsingReference(){
    int num = 5;

    std::cout << num << std::endl;

    changeValUsingReference(num);

    std::cout << num << std::endl;
}

void etcReference(){
    int x;
    int &y = x;
    int &z = y;

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
}

void arrayReference(){
    int arr[3] = {1, 2, 3};
    int (&ref)[3] = arr;

    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;

    std::cout << arr[0] << arr[1] << arr[2] << std::endl;
}


