//
// Created by User on 2023-11-23.
//

#include <string.h>
#include <iostream>
#include "Marine.h"

int Marine::totalMarineAmount = 0;

Marine::Marine() : hp_(50), coord_x_(0), coord_y_(0), defaultDamage_(5), is_dead_(false){
    totalMarineAmount++;
}

Marine::Marine(int x, int y) :  coord_x_(x), coord_y_(y), hp_(50), defaultDamage_(5), is_dead_(false){
    totalMarineAmount++;
}

Marine::Marine(int x, int y, int defaultDamage) :  coord_x_(x), coord_y_(y), hp_(50),
                                                    defaultDamage_(defaultDamage), is_dead_(false){
    totalMarineAmount++;
}


Marine::~Marine(){
    totalMarineAmount--;
}

void Marine::move(int x, int y) {
    coord_x_ = x;
    coord_y_ = y;
}

int Marine::attack() const {return defaultDamage_;}

Marine& Marine::beAttacked(int damageEarn) {
    hp_ -= damageEarn;

    if (hp_ <= 0) is_dead_ = true;

    return *this;
}

void Marine::showStat() {
//    std::cout << " *** Marine : " << name_ << " *** \n"
    std::cout << " *** Marine *** \n"
                << "Location: (" << coord_x_ << ", " << coord_y_ << ")\n"
                << "HP: " << hp_ << "\n"
                << "Total Marine Amount: " << totalMarineAmount << std::endl;
}

void Marine::showTotalMarine() {
    std::cout << "Total Marine Amount: " << totalMarineAmount << "\n";
}