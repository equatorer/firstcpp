#include "gun.h"
#include "iostream"
using namespace std;

void gun::addBullet(int bcBulletNum){
    this->bcBulletNum += bcBulletNum;
}
bool gun::shoot(){
    if(this->bcBulletNum <= 0){
        cout << "There is no bullet!" << endl;
        return false;
    }
    this->bcBulletNum -= 1;
    cout << "shoot successful" << endl;
    return true;
}
