#ifndef DEF_POINT
#define DEF_POINT

#include <iostream>

class Point{
	public:
	
	Point(int x, int y);
	void deplacer(int x,int y);
	int getAbscisse() const;
	int getOrdonnee() const;
	void setAbscisse(int x);
	void setOrdonnee(int y);
	
	
	private:
	
	int abscisse;
	int ordonnee;

};

#endif


