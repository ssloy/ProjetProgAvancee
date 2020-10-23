#ifndef DEF_CUBE
#define DEF_CUBE

#include "Point.hpp"
#include "ATH.hpp"
#include <string>
#include <SFML/Graphics.hpp>

class Cube{
    public:
    
    Cube();
    void gagnerVie(int v);
    void prendreDegats(int d = 1);
    void augmenterVieMax(int v);
    void diminuerVieMax(int v);
    void regenMana(int m);
    void depenserMana(int m);
    bool estVivant() const;
    
    void deplacerCube(int x, int y);
    
    void chute();
    bool dansAir() const;
    
    void cubeGentil();
    void cubeColere();
    
   
    // Get/Set methode
    	// Vie/Max
    int getVie() const;
    int getVieMax() const;
    	//Position
    int getAbscisseCube() const;
    int getOrdonneeCube() const;
    void setAbscisseCube(int x);
    void setOrdonneeCube(int y);
    	//Nom
    void setNom(std::string nouvNom);
    std::string getNom() const;
    	//Vitesse
    int getVitesse() const;
    void setVitesse(int vit);
    	//Gravite
    int getGravite() const;
    void setGravite(int g);
    	//Sprite/Texture
    void setTexture(sf::Image texture);
    sf::Texture getTexture();
    sf::Sprite getSprite();
    	//ATH
    ATH getATH() const;
    
    private:
    
    int vie;
    int vieMax;
    int mana;
    Point position;
    std::string nom;
    int vitesse;
    int gravite;
    sf::Texture textureCube;
    sf::Sprite sprCube;
    ATH ath;
};

#endif
