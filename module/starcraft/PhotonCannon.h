//
// Created by User on 2023-11-24.
//

#ifndef CPP_TIL_PHOTONCANNON_H
#define CPP_TIL_PHOTONCANNON_H


class PhotonCannon {
    int hp_, shield_;
    int coord_x_, coord_y_;
    int damage_;

    char *name_;

public:
        PhotonCannon(int x, int y);
        PhotonCannon(int x, int y, const char *cannonName);
        PhotonCannon(const PhotonCannon& cannon);
        ~PhotonCannon();

        void showStat();
};


#endif //CPP_TIL_PHOTONCANNON_H
