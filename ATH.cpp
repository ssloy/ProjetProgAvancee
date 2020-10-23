#include "ATH.hpp"

ATH::ATH(){
    
    if (!textureVide.loadFromFile("../ressources/TextureATH/barreVieVide.png")){
    }
    if (!texturePleine.loadFromFile("../ressources/TextureATH/barreVie.png")){
    }
    if (!textureBarreMana.loadFromFile("../ressources/TextureATH/barreMana.png")){
    }
    if (!textureMana.loadFromFile("../ressources/TextureATH/Mana.png")){
    }
    
    
    textureVide.setRepeated(false);
    sprVide.setTexture(textureVide);
    sprVide.setScale(5,5);
    sprVide.setTextureRect(sf::IntRect(0,0,30,10));
    
    texturePleine.setRepeated(false);
    sprPleine.setTexture(texturePleine);
    sprPleine.setScale(5,5);
    sprPleine.setTextureRect(sf::IntRect(0,0,30,10));
    
    textureMana.setRepeated(false);
    sprMana.setTexture(textureMana);
    sprMana.setScale(5,3);
    sprMana.setPosition(sf::Vector2f(0,60));
    
    textureBarreMana.setRepeated(false);
    sprBarreMana.setTexture(textureBarreMana);
    sprBarreMana.setScale(5,3);
    sprBarreMana.setPosition(sf::Vector2f(0,60));
    
}

void ATH::modifVieMax(int nb){
    sprVide.setTextureRect(sf::IntRect(0,0,nb*10,10));
}

void ATH::modifVie(int nb){
    sprPleine.setTextureRect(sf::IntRect(0,0,nb*10,10));
}

void ATH::modifMana(int nb){
    float pourcent = (nb*66)/100;
    sprMana.setTextureRect(sf::IntRect(0,0,pourcent,10));
}


//Get/Set methode

sf::Sprite ATH::getSpriteVide() const{
    return sprVide;
}

sf::Sprite ATH::getSpritePleine() const{
    return sprPleine;
}

sf::Sprite ATH::getSpriteBarreMana() const{
    return sprBarreMana;
}

sf::Sprite ATH::getSpriteMana() const{
    return sprMana;
}





