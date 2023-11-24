//
// Created by User on 2023-11-23.
//

#ifndef CPP_TIL_MARINE_H
#define CPP_TIL_MARINE_H


class Marine {
    static int totalMarineAmount;
    const static int i = 0;
    const int defaultDamage_;

    int hp_;
    int coord_x_, coord_y_;
    bool is_dead_;


    public:
        Marine();
        Marine(int x, int y);
        Marine(int x, int y, int defaultDamage);
        ~Marine();

        int attack() const;
        Marine& beAttacked(int damageEarn);
        void move(int x, int y);

        void showStat();
        static void showTotalMarine();
};


#endif //CPP_TIL_MARINE_H
