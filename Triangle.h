
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
#include "Point.h"
#include<cmath>

using namespace std;

class Triangle : public Point{
  private:
  	Point vertex1;
  	Point vertex2;
  	Point vertex3;
  public:
  	Triangle();
  	Triangle(Point punto1, Point punto2, Point punto3);
  	~Triangle();
  	
  	Point getVertex1();
    Point getVertex2();
    Point getVertex3();
  	double perimeter();
  	double area();
    void imprimeVertex(Point punto2);

};

Triangle::Triangle(){
  this->vertex1=Point(0,0);
  this->vertex2=Point(50,30);
  this->vertex3=Point(25,10);
}

Triangle::Triangle(Point punto1, Point punto2, Point punto3)
{
	this->vertex1 = punto1;
  this->vertex2 = punto2;
  this->vertex3 = punto3;
}

Triangle::~Triangle()
{
	
}

Point Triangle::getVertex1()
{
	return this->vertex1;
}

Point Triangle::getVertex2()
{
	return this->vertex2;
}

Point Triangle::getVertex3()
{
	return this->vertex3;
}

double Triangle::perimeter()
{
  double perimeter, lado1, lado2, lado3;
  lado1 = sqrt( pow( getVertex2().getPosX() - getVertex1().getPosX() , 2 ) + pow( getVertex2().getPosY() - getVertex1().getPosY() , 2 ));
  lado2 = sqrt( pow( getVertex3().getPosX() - getVertex1().getPosX() , 2 ) + pow( getVertex3().getPosY() - getVertex1().getPosY() , 2 ));
  lado3 = sqrt( pow( getVertex2().getPosX() - getVertex3().getPosX() , 2 ) + pow( getVertex2().getPosY() - getVertex3().getPosY() , 2 ));
  perimeter = lado1 + lado2 + lado3;

  return perimeter;
}

double Triangle::area(){
  double semiperimeter, lado1, lado2, lado3, area;
  lado1 = sqrt( pow( getVertex2().getPosX() - getVertex1().getPosX() , 2 ) + pow( getVertex2().getPosY() - getVertex1().getPosY() , 2 ));
  lado2 = sqrt( pow( getVertex3().getPosX() - getVertex1().getPosX() , 2 ) + pow( getVertex3().getPosY() - getVertex1().getPosY() , 2 ));
  lado3 = sqrt( pow( getVertex2().getPosX() - getVertex3().getPosX() , 2 ) + pow( getVertex2().getPosY() - getVertex3().getPosY() , 2 ));
  semiperimeter = ( lado1 + lado2 + lado3 )/2;
  area = sqrt( semiperimeter * ( semiperimeter - lado1 ) * ( semiperimeter - lado2 ) * ( semiperimeter - lado3 ));
  
  return area;
}

void Triangle::imprimeVertex(Point punto2){
cout<<"EL punto 1 es: "<<endl;
cout<<punto2.getPosX()<<", "<<punto2.getPosY()<<endl;
}


#endif