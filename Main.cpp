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
    MyString str("very long string");
    MyString str2("<some string inserted between>");
    str.reserve(30);

    std::cout << "capacity : " << str.capacity() << "\n"
                << "string length : " << str.getLength() << "\n";
    str.println();

    str.insert(5, str2);
    str.println();

    MyString str3("abcd");
    str3.erase(1, 2);
    str3.println();

    return 0;
}
