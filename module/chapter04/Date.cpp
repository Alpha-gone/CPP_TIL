//
// Created by User on 2023-11-22.
//

#include "Date.h"
#include <iostream>

void runDate(){
    Date day = Date();
    Date day2(2012, 10, 31);

    day.showDate();
    day2.showDate();

//    Date date(2011, 3, 1);
//
//    date.setDate(2011, 3, 1);
//    date.showDate();
//
//    date.addDay(30);
//    date.showDate();
//
//    date.addDay(2000);
//    date.showDate();
//
//    date.setDate(2012, 1, 31);
//    date.addDay(29);
//    date.showDate();
//
//    date.setDate(2012, 8, 4);
//    date.addDay(2500);
//    date.showDate();
}

void Date::setDate(int year, int month, int day) {
    year_ = year;
    month_ = month;
    day_ = day;
}

int getCurrentMonthTotalDays(int year, int month) {
    static int month_day[12] = {31, 28, 31,
                                30, 31, 30,
                                31, 31, 30,
                                31,30,31};

    if (month != 2) return month_day[month - 1];
    else if (year % 4 == 0 && year % 100 != 0) return 29;
    else return 28;
}

void Date::addDay(int inc) {
    while (true){
        int currentMonthTotalDays = getCurrentMonthTotalDays(year_, month_);

        if (day_ + inc <=currentMonthTotalDays){
            day_ += inc;
            return;
        }else{
            inc -= (currentMonthTotalDays - day_ + 1);
            day_ = 1;
            addMonth(1);
        }
    }
}

void Date::addMonth(int inc) {
    addYear((inc + month_ - 1) / 12);
    month_ = month_ + inc % 12;
    month_ = month_ == 12 ? 12 : month_ % 12;
}

void Date::addYear(int inc) {
    year_ += inc;
}

void Date::showDate() {
    std::cout << year_ << "/"
                << month_ << "/"
                << day_ << std::endl;
}