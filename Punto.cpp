//
//  main.cpp
//  Prueba1
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#include "Punto.h"

//Metodos
Punto::Punto() {
    x = 0;
    y = 0;
}
Punto::Punto(double _x, double _y) {
    x = _x;
    y = _y;
}

double Punto::getX() {
    return x;
}
double Punto::getY() {
    return y;
}
void Punto::setX(double _x) {
    x = _x;
}
void Punto::setY(double _y) {
    y = _y;
}

//Funciones
double Punto::calculaDistancia(Punto p2){
    int x2 = p2.getX();
    int x1 = x;
    int y2 = p2.getY();
    int y1 = y;
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void Punto::muestraPunto(){
    cout << to_string(x) + to_string(y);
}