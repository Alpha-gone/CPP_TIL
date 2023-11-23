//
// Created by User on 2023-11-22.
//

#ifndef CPP_TIL_ANIMAL_H
#define CPP_TIL_ANIMAL_H

#include <iostream>

class Animal {
private:
    int food;
    int weight;

public:
    void setAnimals(int _food, int _weight);
    void increaseFood(int inc);
    void viewStat();


};

void animalMain();

#endif //CPP_TIL_ANIMAL_H
