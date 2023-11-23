//
// Created by User on 2023-11-23.
//

#ifndef CPP_TIL_MARINE_H
#define CPP_TIL_MARINE_H


class Marine {
    char* name_;
    int hp_;
    int coord_x_, coord_y_;
    int damage_;
    bool is_dead_;

    public:
        Marine();
        Marine(int x, int y);
        Marine(int x, int y, const char* name);

        int attack();
        void beAttacked(int damageEarn);
        void move(int x, int y);

        void showStat();
};


#endif //CPP_TIL_MARINE_H
