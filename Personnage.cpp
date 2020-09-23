#include "Personnage.h"
#include <iostream>
using namespace std;

Personnage::Personnage(): vie(3),pos_x(0),pos_y(0),vitesse(5),nom("Dummy"){
    
}

void Personnage::deplacer(char dir){
    switch(dir):
        case q:
            pos_x -= vitesse;
            break;
        case d:
            pos_x += vitesse;
            break;
}

void Personnage::sauter(){
    pos_y += vitesse;
}

void Personnage::recevoirDegats(){
    vie -= 1;
}

bool Personnage::dansAir(){
    bool air(false);
    if (pos_y != 0){
        air = true;
    }
    return air;
}

bool Personnage::estVivant(){
    bool vivant(true);
    if (vie == 0){
        vivant = false;
    }
    return vivant;
}
