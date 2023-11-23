//
// Created by User on 2023-11-23.
//

#include <iostream>

#include "Marine.h"
#include "StarCraft.h"

void StarCraft::play() {
    Marine* marines[100];

    marines[0] = new Marine(2, 3, "marine 1");
    marines[1] = new Marine(3, 5, "marine 2");

    marines[0] -> showStat();
    marines[1] -> showStat();

    std::cout << "\n marine1 attacked marine2 \n";
    marines[1] ->beAttacked(marines[0] ->attack());

    marines[0] -> showStat();
    marines[1] -> showStat();

    delete marines[0];
    delete marines[1];
}