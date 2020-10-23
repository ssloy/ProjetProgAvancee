#ifndef DEF_ATH
#define DEF_ATH

#include <SFML/Graphics.hpp>

class ATH{
    public:
    
    ATH();
    void modifVieMax(int nb);
    void modifVie(int nb);
    void modifMana(int nb);
    
    //Get/Set methode

    sf::Sprite getSpriteVide() const;
    sf::Sprite getSpritePleine() const;
    sf::Sprite getSpriteBarreMana() const;
    sf::Sprite getSpriteMana() const;	
	
	
    private:
    
    sf::Texture texturePleine;
    sf::Texture textureVide;
    sf::Texture textureBarreMana;
    sf::Texture textureMana;
    
    sf::Sprite sprPleine;
    sf::Sprite sprVide;
    sf::Sprite sprBarreMana;
    sf::Sprite sprMana;
};

#endif
