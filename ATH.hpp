#ifndef DEF_ATH
#define DEF_ATH

#include <SFML/Graphics.hpp>

class ATH{
    public:
    
    ATH();
    void modifVieMax(int nb);
    void modifVie(int nb);
    
    //Get/Set methode

    sf::Sprite getSpriteVide() const;
    sf::Sprite getSpritePleine() const;	
	
    private:
    sf::Texture texturePleine;
    sf::Texture textureVide;
    sf::Sprite sprPleine;
    sf::Sprite sprVide;
};

#endif
