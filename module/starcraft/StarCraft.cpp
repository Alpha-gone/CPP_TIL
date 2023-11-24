//
// Created by User on 2023-11-23.
//

#include <iostream>

#include "PhotonCannon.h"
#include "Marine.h"
#include "StarCraft.h"

void createMarine();

void StarCraft::play() {
//    PhotonCannon pc(3,3, "Cannon");
//    PhotonCannon pc2 = pc;
//
//    pc.showStat();
//    pc2.showStat();


    Marine marine1(2, 3, 5);
    Marine::showTotalMarine();

    Marine marine2(3,5, 5);
    Marine::showTotalMarine();

    createMarine();

    std::cout << "\n marine1 attacked marine2 \n";
    marine2.beAttacked(marine1.attack()).beAttacked(marine1.attack());

    marine1.showStat();
    marine2.showStat();

}

void createMarine(){
    Marine marine3(10, 10, 4);
    Marine::showTotalMarine();
}