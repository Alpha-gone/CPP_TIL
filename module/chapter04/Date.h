//
// Created by User on 2023-11-22.
//

#ifndef CPP_TIL_DATE_H
#define CPP_TIL_DATE_H


class Date {
    int year_;
    int month_;
    int day_;

    public:
        void SetDate(int year, int month, int date);
        void AddDay(int inc);
        void AddMonth(int inc);
        void AddYear(int inc);

        void showDate();
};


#endif //CPP_TIL_DATE_H
