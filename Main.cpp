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
    Complex a(1.0, 2.0);
    Complex b(3.0, -2.0);
    Complex c(0.0, 0.0);


    c = a * b + a / b + a + b;

    c.println();

    return 0;
}
