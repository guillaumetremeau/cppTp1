// Fichier Point.hpp
#ifndef __Point_HPP__
#define __Point_HPP__

class Point {

	int compteur;
   int x;
   int y;

 public:
	Point(int x, int y);
	Point();

	int getCompteur();
  int getX();
  int getY();
  void deplacerDe(int x, int y);
  void deplacerVers(int x, int y);

};

#endif
