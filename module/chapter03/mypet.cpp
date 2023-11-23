//
// Created by User on 2023-11-22.
//

#include <iostream>

typedef struct AnimalStruct{
    char name[30];
    int age;

    int health;
    int food;
    int clean;
}Animal;

void createAnimal(Animal *animal){
    std::cout << "name of animal? ";
    std::cin >> animal -> name;

    std::cout << "age of animal? ";
    std::cin >> animal -> age;

    animal -> health = 100;
    animal -> food = 100;
    animal -> clean = 100;
}

void play(Animal *animal){
    animal -> health += 10;
    animal -> food -= 10;
    animal -> clean -= 30;
}

void oneDayPass(Animal *animal){
    animal -> health -= 10;
    animal -> food -= 30;
    animal -> clean -= 20;
}

void showStat(Animal *animal){
    std::cout << animal -> name << "'s Status"<< std::endl
                << "Health : " << animal -> health << std::endl
                << "Full :  " << animal -> food << std::endl
                << "Clean : " << animal -> clean << std::endl;
}

void runMyPet(){
    Animal *list[10];
    int animalNum = 0;

    for(;;){
        std::cout << "1. Add Animal" << std::endl
                    << "2. Play" << std::endl
                    << "3. Show Status" << std::endl;

        int input;
        std::cin >> input;

        switch (input) {
            int chooseAnimalNum;

            case 1:
                list[animalNum] = new Animal;
                createAnimal(list[animalNum]);

                animalNum++;
                break;
            case 2:
                std::cout << "Play with Who? : ";
                std::cin >> chooseAnimalNum;

                if (chooseAnimalNum < animalNum) play(list[chooseAnimalNum]);

                break;
            case 3:
                std::cout << " Who's seeing Status ? : ";
                std::cin >> chooseAnimalNum;

                if (chooseAnimalNum < animalNum) showStat(list[chooseAnimalNum]);

                break;
        }

        for (int i = 0; i != animalNum ; i++) {
            oneDayPass(list[i]);
        }
    }

    for (int i = 0; i != animalNum ; i++) {
        delete list[i];
    }
}