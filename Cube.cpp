#include "Cube.hpp"

using namespace std;

Cube::Cube(): vie(3), vieMax(3), position(Point(0,0)), nom("MadDummy"), vitesse(1), gravite(1){
    
    if (!textureCube.loadFromFile("ressources/TextureCube/Cube.png")){
    }
    
    sprCube.setTexture(textureCube);
}

void Cube::gagnerVie(int v){
    vie += v;
    if (vie > vieMax){
        vie = vieMax;
    }
}

void Cube::prendreDegats(int d){
    vie -= d;
}

void Cube::augmenterVieMax(int v){
    vieMax += v;
}

bool Cube::estVivant() const{
    bool v = true;
    if (vie > 0){
        v = false;
    }
    return v;
}

void Cube::deplacerCube(int x, int y){
    position.deplacer(x*vitesse, y*vitesse);
}

void Cube::cubeGentil(){
    sprCube.setTextureRect(sf::IntRect(0,0,300,300));
}

// Get/Set methode

int Cube::getVie() const{
    return vie;
}

int Cube::getVieMax() const{
    return vieMax;
}

int Cube::getAbscisseCube() const{
    return position.getAbscisse();
}

int Cube::getOrdonneeCube() const{
    return position.getOrdonnee();
}

void Cube::setAbscisseCube(int x){
    position.setAbscisse(x);
}

void Cube::setOrdonneeCube(int y){
    position.setOrdonnee(y);
}

void Cube::setNom(string nouvNom){
    nom = nouvNom;
}

string Cube::getNom(){
    return nom;                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}

int Cube::getVitesse() const{
    return vitesse;
}

void Cube::setVitesse(int vit){
    vitesse = vit;
}

int Cube::getGravite() const{
    return gravite;
}

void Cube::setGravite(int g){
    gravite = g;
}

void Cube::setTexture(sf::Image image){
    textureCube.update(image);
}

sf::Texture Cube::getTexture(){
    return textureCube;
}

sf::Sprite Cube::getSprite(){
    return sprCube;
}
















