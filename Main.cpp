#include <iostream>
#include "module/chapter01/chapter01.h"
#include "module/chapter02/chapter02.h"
#include "module/chapter03/chapter03.h"
#include "module/chapter03/mypet.h"
#include "module/chapter04/Animal.h"
#include "module/chapter04/Date.h"
#include "module/starcraft/StarCraft.h"
#include "module/chapter04/MyString.h"
#include "module/chapter04/Complex.h"

int main() {
    Complex a(0.0, 0.0);

    a =  "-1.1 + i3.923" + a;
    a.println();

//    a = a - "1.2 -i1.823";
//    a.println();
//
//    a = a * "2.3+i22";
//    a.println();
//
//    a = a / "-12+i55";
//    a.println();

    return 0;
}
