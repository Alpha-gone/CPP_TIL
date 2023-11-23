//
// Created by User on 2023-11-22.
//

#include "Animal.h"


void Animal::setAnimals(int _food, int _weight){
   food = _food;
   weight = _weight;
}
void Animal::increaseFood(int inc){
    food += inc;
    weight += (inc / 3);
}

void Animal::viewStat(){
    std::cout << "This Animal's food : " << food << std::endl
        << "This Animal's weight : " << weight << std::endl;
}


void animalMain(){
    Animal animal;
    animal.setAnimals(100, 50);
    animal.increaseFood(30);

    animal.viewStat();
}