#include "ATH.hpp"

ATH::ATH(){
    
    if (!textureVide.loadFromFile("../ressources/TextureATH/barreVieVide.png")){
    }
    if (!texturePleine.loadFromFile("../ressources/TextureATH/barreVie.png")){
    }
    
    textureVide.setRepeated(false);
    sprVide.setTexture(textureVide);
    sprVide.setScale(5,5);
    sprVide.setTextureRect(sf::IntRect(0,0,30,10));
    
    texturePleine.setRepeated(false);
    sprPleine.setTexture(texturePleine);
    sprPleine.setScale(5,5);
    sprPleine.setTextureRect(sf::IntRect(0,0,30,10));
}

void ATH::modifVieMax(int nb){
    sprVide.setTextureRect(sf::IntRect(0,0,nb*10,10));
}

void ATH::modifVie(int nb){
    sprPleine.setTextureRect(sf::IntRect(0,0,nb*10,10));
}

sf::Sprite ATH::getSpriteVide() const{
    return sprVide;
}

sf::Sprite ATH::getSpritePleine() const{
    return sprPleine;
}
