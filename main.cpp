#include "gun.h"
#include "sol.h"
void test(){
    sol sd("xusanduo");
    sd.addgun(new gun("m4a1"));
    sd.abAddBulletToGun(20);
    sd.fire();
}

int main(){
    test();
    return 0;
}
