#pragma once
#include <string>
class gun{
public:
    gun(std::string type){
        this->bcBulletNum = 0;
        this->type = type;
    }

    void addBullet(int bcBulletNum);
    bool shoot();
private:
    int bcBulletNum;
    std::string type;
};
