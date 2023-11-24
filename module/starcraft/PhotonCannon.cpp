//
// Created by User on 2023-11-24.
//

#include "PhotonCannon.h"
#include <iostream>
#include <cstring>

PhotonCannon::PhotonCannon(int x, int y) {
    std::cout << "constructor call \n";
    hp_ = 100;
    shield_ = 100;
    coord_x_ = x;
    coord_y_ = y;
    damage_ = 20;

    name_ = NULL;
}

PhotonCannon::PhotonCannon(int x, int y, const char *cannonName) {
    std::cout << "constructor call \n";
    hp_ = 100;
    shield_ = 100;
    coord_x_ = x;
    coord_y_ = y;
    damage_ = 20;

    name_ = new char[strlen(cannonName) + 1];
    strcpy(name_, cannonName);
}

PhotonCannon::PhotonCannon(const PhotonCannon& cannon) {
    std::cout << "copy constructor call \n";
    hp_ = cannon.hp_;
    shield_ = cannon.shield_;
    coord_x_ = cannon.coord_x_;
    coord_y_ = cannon.coord_y_;
    damage_ = cannon.damage_;

    name_ = new char[strlen(cannon.name_) + 1];
    strcpy(name_, cannon.name_);
}

PhotonCannon::~PhotonCannon() {
    if (name_) delete[] name_;
}

void PhotonCannon::showStat() {
    std::cout << "Photon Cannon \n"
                << "Location : (" << coord_x_ << ", " << coord_y_ << ")\n"
                << "HP : " << hp_ << std::endl;
}