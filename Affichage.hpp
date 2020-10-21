#ifndef DEF_AFFICHAGE
#define DEF_AFFICHAGE

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Affichage{
    public:
    
    Affichage();
    Affichage(int x, int y);
    
    void afficherFenetre();
    
    private:
    
    sf::Window window;
        
};

#endif
