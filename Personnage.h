#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE


class Personnage{
    public:
    
    Personnage(); //Constructeur
    void deplacer(char d);
    void sauter();
    void recevoirDegats();
    bool dansAir();
    bool estVivant();
    
    private:
    
    int vie;
    int pos_x;
    int pos_y;
    int vitesse;
    String nom;
    //Capacite capacite;
        
};
