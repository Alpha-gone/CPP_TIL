//
// Created by User on 2023-11-22.
//

#include <iostream>

void newAndDelete(){
    int* p = new int;
    *p = 10;

    std::cout << *p << std::endl;

    delete p;
}

void newArray(){
    int arrSize;
    std::cout << "array size : ";
    std::cin >> arrSize;

    int *list = new int[arrSize];

    for (int i = 0; i < arrSize; i++){
        std::cin >> list[i];
    }

    for (int i = 0; i < arrSize; i++){
        std::cout << i << " element of list : " << list[i] << std::endl;
    }

    delete[] list;
}
