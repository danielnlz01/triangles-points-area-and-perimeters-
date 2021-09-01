
#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<string>

using namespace std;

class Point{
// Atributos privados
public:
double x;
double y;

//metodos
public:
Point();
Point(double x, double y);
~Point();
double getPosX();
double getPosY();
void setPosX(double x);
void setPosY(double y);
void imprimeValores();

};

Point::Point(){
  this->x=0;
  this->y=0;
}

Point::Point(double posX, double posY){
  this->x=posX;
  this->y=posY;
}

Point::~Point(){

}

double Point::getPosX(){
  return this->x;
}

double Point::getPosY(){
  return this->y;
}

void Point::setPosX(double x){
  this->x=x;
}

void Point::setPosY(double y){
  this->y=y;
}

void Point::imprimeValores(){
  cout<<"El valor de x es: "<< getPosX() <<endl;
  cout<<"El valor de y es: "<< getPosY() <<endl;
  cout<<endl;
}


#endif


