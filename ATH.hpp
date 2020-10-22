#ifndef DEF_ATH
#define DEF_ATH

#include "cube.hpp"

class ATH{
    
    public:
    ATH(Cube joueur);
    void modifVieMax(int nb);
    void modifVie(int nb);

    private:
    Cube cube;
    sf::Texture textureViePleine;
    sf::Texture textureVieVide;
    sf::Sprite sprPleine;
    sf::Sprite sprVide;
};

#endif
