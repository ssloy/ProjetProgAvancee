#ifndef DEF_ATH
#define DEF_ATH

#include "cube.hpp"

class ATH{
    
    public:
    ATH(Cube joueur);
    modifVieMax(int nb);
    modifVie(int nb);

    private:
    Cube cube;
    sf::Texture textureViePleine;
    sf::Texture textureVieVide;
    sf::Sprite sprViePleine;
    sf::Sprite sprVieVide;
};

#endif
