//
// Created by User on 2023-11-22.
//

#include "chapter01.h"
#include <iostream>

void quest1(){
    std::cout << "hi" << std::endl
              << "my name is "
              << "Psi" << std::endl;
}

void forSum(){
    int sum = 0;

    for(int i = 1; i < 11; i++){
        sum += i;
    }

    std::cout << "sum: " << sum << std::endl;
}

void whileSum(){
    int sum = 0;
    int i = 1;

    while (i <= 10){
        sum += i;
        i++;
    }

    std::cout << "sum : " << sum << std::endl;
}

void luckyNumber(){
    int luckyNumber = 3;

    int userInput;

    while(true){
        std::cout << "input lucky number  : ";
        std::cin >> userInput;

        if(luckyNumber == userInput){
            std::cout << "excellent" << std::endl;
            break;
        }else{
            std::cout << "try again" << std::endl;
        }
    }

}

void showInfo(){
    int input;
    std::string output;

    std::cout << "show info" << std::endl
              << "1. name" << std::endl
              << "2. age" << std::endl
              << "3. gender" << std::endl;

    std::cin >> input;

    switch(input){
        case 1:
            output = "Psi";
            break;
        case 2:
            output = "99";
            break;
        case 3:
            output="man";
            break;
        default:
            output="wrong input";
            break;
    }

    std::cout << output << std::endl;
}