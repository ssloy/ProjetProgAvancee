#include "Personnage.h"
#include <iostream>
using namespace std;

Personnage::Personnage(): vie(3),pos_x(0),pos_y(0),vitesse(5),nom("Dummy"){
    
}

void deplacer(char dir){
    switch(dir):
        case q:
            pos_x -= vitesse;
            break;
        case d:
            pos_x += vitesse;
            break;
}

void sauter(){
    pos_y += vitesse;
}

void recevoirDegats(){
    vie -= 1;
}
