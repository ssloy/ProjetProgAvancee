#include <iostream>
#include "Point.hpp"

using namespace std;

Point::Point(int x, int y): abscisse(x), ordonnee(y){
    
}

void Point::deplacer(int x, int y){
    abscisse += x;
    ordonnee += y;
}

int Point::getAbscisse() const{
    return abscisse;
}

int Point::getOrdonnee() const{
    return ordonnee;
}

void Point::setAbscisse(int x){
    abscisse = x;
}

void Point::setOrdonnee(int y){
    ordonnee = y;
}
