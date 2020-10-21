#include "Cube.hpp"

int main(){
    sf::RenderWindow window(sf::VideoMode(1000,500),"Cube's Quest");
    Cube cube;
    cube.cubeGentil();
    
    while (window.isOpen())
{
        window.clear();
        
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
                window.close();
            }
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
                cube.deplacerCube(0,1);
            }
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){
                cube.deplacerCube(-1,0);
            }
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
                cube.deplacerCube(0,-1);
            }
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
                cube.deplacerCube(1,0);
            }
        }
        
        window.draw(cube.getSprite());
        window.display();
    }
    
    return 0;
}
