#include "ATH.hpp"

ATH::ATH(Cube joueur){
    cube = joueur;
    
    if (!textureVide.loadFromFile("../ressources/TextureATH/barreVieVide.png")){
    }
    if (!texturePleine.loadFromFile("../ressources/TextureATH/barreVie.png")){
    }
    
    textureVide.setRepeated(false);
    sprVide.setTexture(textureVide);
    sprVide.setScale(5,5);
    sprVide.setTextureRect(sf::IntRect(0,0,33,8));
    
    texturePleine.setRepeated(false);
    sprPleine.setTexture(texturePleine);
    sprPleine.setScale(5,5);
    sprPleine.setTextureRect(sf::IntRect(0,0,33,8));
}

void ATH::modifVieMax(int nb){
    
}

void ATH::modifVie(int nb){
    
}
