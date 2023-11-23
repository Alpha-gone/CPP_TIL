//
// Created by User on 2023-11-22.
//

#ifndef CPP_TIL_DATE_H
#define CPP_TIL_DATE_H

#include <iostream>

class Date {
    int year_;
    int month_;
    int day_;

    public:
        Date(){
            std::cout << "call default constructor \n";

            year_ = 2012;
            month_ = 7;
            day_  = 12;
        }

        Date(int year, int month, int day){
            std::cout << "call 3 args constructor \n";

            year_ = year;
            month_ = month;
            day_ = day;
        }

        void setDate(int year, int month, int date);
        void addDay(int inc);
        void addMonth(int inc);
        void addYear(int inc);

        void showDate();
};

void runDate();


#endif //CPP_TIL_DATE_H
