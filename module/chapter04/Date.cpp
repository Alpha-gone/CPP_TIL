//
// Created by User on 2023-11-22.
//

#include "Date.h"
#include <iostream>

void Date::SetDate(int year, int month, int day) {
    year_ = year;
    month_ = month;
    day_ = day;
}

void Date::AddDay(int inc) {
    int endOfMonth;

    switch (month_) {
        case 2:
            endOfMonth = 28;
        case 4:
        case 6:
        case 9:
        case 11:
            endOfMonth = 30;
        default:
            endOfMonth = 31;
    }

    day_ += inc;
}