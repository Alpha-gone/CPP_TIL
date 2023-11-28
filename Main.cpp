#include <iostream>
#include "module/chapter01/chapter01.h"
#include "module/chapter02/chapter02.h"
#include "module/chapter03/chapter03.h"
#include "module/chapter03/mypet.h"
#include "module/chapter04/Animal.h"
#include "module/chapter04/Date.h"
#include "module/starcraft/StarCraft.h"
#include "module/chapter04/MyString.h"

int main() {
    MyString str("this is a very very long string");

    std::cout << "Location of first <very> in the string : " << str.find(0, "very") << "\n"
                << "Location of second <very> in the string : " << str.find(
                                                                    str.find(0, "very") + 1,
                                                                        "very");
    return 0;
}
