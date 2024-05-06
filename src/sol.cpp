#include "sol.h"
sol:sol(std::string name){
        this.name = name;
        this.pGun = nullptr;
    }
void sol::addgun(gun *pGun){
    this.pGun = pGun;
}
void sol::abAddBulletToGun(int num){
    this.pGun.abAddBulletToGun(num);
}
bool sol:fire(){
    this.pGun.shoot();
}
sol::~sol(){
    if(this.pGun == nullptr){
        return;
    }
    delete this.pGun;
    this.pGun = nullptr;
}
