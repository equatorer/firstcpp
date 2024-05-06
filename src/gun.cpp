#include "gun.h"
#include "iostream"
using namespaced std;

void gun:addBullet(int bcBulletNum){
    this.bcBulletNum += bcBulletNum;
}
bool gun::shoot(){
    if(this.bcBulletNum <= 0){
        cout << "There is no bullet!" << endl;
        return false;
    }
    this.bcBulletNum -= 1;
    return true;
}
