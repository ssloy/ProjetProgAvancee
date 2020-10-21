#ifndef DEF_CUBE
#define DEF_CUBE

#include "Point.hpp"
#include <string>
#include <SFML/Graphics.hpp>

class Cube{
    public:
    
    Cube();
    void gagnerVie(int v);
    void prendreDegats(int d = 1);
    void augmenterVieMax(int v);
    bool estVivant() const;
    void deplacerCube(int x, int y);
    void cubeGentil();
   
    // Get/Set methode
    
    int getVie() const;
    int getVieMax() const;
    int getAbscisseCube() const;
    int getOrdonneeCube() const;
    void setAbscisseCube(int x);
    void setOrdonneeCube(int y);
    void setNom(std::string nouvNom);
    std::string getNom();
    int getVitesse() const;
    void setVitesse(int vit);
    int getGravite() const;
    void setGravite(int g);
    void setTexture(sf::Image texture);
    sf::Texture getTexture();
    sf::Sprite getSprite();
    
    private:
    
    int vie;
    int vieMax;
    Point position;
    std::string nom;
    int vitesse;
    int gravite;
    sf::Texture textureCube;
    sf::Sprite sprCube;
};

#endif
