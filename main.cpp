#include "Cube.hpp"

int main(){
    
    sf::RenderWindow window(sf::VideoMode(1000,500),"Cube's Quest");
    
    Cube cube;
    cube.cubeGentil();
    
    while (window.isOpen()){
        window.clear();
        
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
                window.close();
            }
            if (event.type == sf::Event::KeyPressed){
                
                switch(event.key.code){
                    
                    case(sf::Keyboard::Z):
                        cube.deplacerCube(0,-1);
                        break;
                        
                    case(sf::Keyboard::Q):
                        cube.deplacerCube(-1,0);
                        break;
            
                    case(sf::Keyboard::S):
                        cube.deplacerCube(0,1);
                        break;
            
                    case(sf::Keyboard::D):
                        cube.deplacerCube(1,0);
                        break;
                        
                    default:
                        break;
                }
            }
        }

        window.draw(cube.getSprite());
        window.display();
    }
    
    return 0;
}
