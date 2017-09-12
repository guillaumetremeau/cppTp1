// Fichier Point.cpp

#include <iostream>
#include "Point.hpp"

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
	std::cout << "Constructeur complet de Point";
	++compteur;
}
Point::Point() {
	this->x = 0;
	this->y = 0;
	std::cout << "Constructeur sans attributs de Point";
	++compteur;
}

int Point::getX() {
  return x;
}
int Point::getY() {
	return y;
}
int Point::getCompteur() {
	return compteur;
}

void Point::deplacerDe(int x, int y) {
	this->x += x;
	this->y += y;
}
void Point::deplacerVers(int x, int y) {
	this->x = x;
	this->y = y;
}

int main(int, char**) {
    Point *p1;
    p1 = new Point();
    Point *p2;
    p2 = new Point(1,2);

     std::cout << p1->getX();
     std::cout << p2->getX();
  return 0;
}

