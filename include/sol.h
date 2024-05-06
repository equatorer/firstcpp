#pragma once
#include <string> 
#include "gun.h"

class sol{
public:
    sol(std::string name);
    ~sol();
    void addgun(gun* pGun);
    void abAddBulletToGun(int num);
    bool fire();
private:
    std::string name;
    gun* pGun;
};
