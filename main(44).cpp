#include <iostream>
#include"Point.h"
#include<string>
#include "Triangle.h"


using namespace std;

int main(){

  Point *P1 = new Point();
  cout<< "Punto 1:" <<endl;
  P1->imprimeValores();

  Point *P2= new Point(6,7);
  cout<< "Punto 2:" <<endl;
  P2->imprimeValores();

  P2-> setPosX(5);
  P2-> setPosY(8);
  cout<< "Punto 3:" <<endl;
  P2-> imprimeValores();

  Triangle *T1 = new Triangle( Point(0,6), Point(7,6), Point(8,3) );

  T1->imprimeVertex(Point());
  cout<<endl;

  cout<<"El perímetro del Triángulo 1 es:"<<endl;
  cout<< T1->perimeter()<<endl;
  cout<<endl;
  cout<<"El área del Triángulo 1 es:"<<endl;
  cout<<T1->area()<<endl;
  cout<<endl;

  Triangle *T2 = new Triangle();
  cout<< "El perímetro del Triángulo 2 es:" <<endl;
  cout << T2->perimeter() << endl;
  cout<<endl;
  cout<< "El área del Triángulo 2 es:" <<endl;
  cout<< T2->area();
  cout<<endl;



  }
