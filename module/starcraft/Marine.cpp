//
// Created by User on 2023-11-23.
//

#include <string.h>
#include <iostream>
#include "Marine.h"

Marine::Marine() {
    name_ = NULL;
    hp_ = 50;
    coord_x_ = 0;
    coord_y_ = 0;
    damage_ = 5;
    is_dead_ = false;
}

Marine::Marine(int x, int y) {
    name_ = NULL;
    hp_ = 50;
    coord_x_ = x;
    coord_y_ = y;
    damage_ = 5;
    is_dead_ = false;
}

Marine::Marine(int x, int y, const char* name) {
    name_ = new char[strlen(name) + 1];
    strcpy(name_ , name);
    hp_ = 50;
    coord_x_ = x;
    coord_y_ = y;
    damage_ = 5;
    is_dead_ = false;
}

void Marine::move(int x, int y) {
    coord_x_ = x;
    coord_y_ = y;
}

int Marine::attack() {return damage_;}

void Marine::beAttacked(int damageEarn) {
    hp_ -= damageEarn;

    if (hp_ <= 0) is_dead_ = true;
}

void Marine::showStat() {
    std::cout << " *** Marine : " << name_ << " *** \n"
                << "Location: (" << coord_x_ << ", " << coord_y_ << ")\n"
                << "HP: " << hp_ << std::endl;
}