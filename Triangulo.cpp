#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#include "Triangulo.hpp"

Triangulo::Triangulo(){
    v1 = {0, 0};
    v2 = {50, 30};
    v3 = {25, 10};
}

Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3){
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

Punto Triangulo::getV1(){
    return v1;
}

Punto Triangulo::getV2(){
    return v2;
}

Punto Triangulo::getV3(){
    return v3;
}

void Triangulo::setV1(Punto _v1){
    v1 = _v1;
}

void Triangulo::setV2(Punto _v2){
    v2 = _v2;
}

void Triangulo::setV3(Punto _v3){
    v3 = _v3;
}

double Triangulo::area(){
    double x1 = v1.getX(), y1 = v1.getY();
    double x2 = v2.getX(), y2 = v2.getY();
    double x3 = v3.getX(), y3 = v3.getY();
    
    double area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
    
    return area;
}

double Triangulo::perimetro(){
    return (v1.calculaDistancia(v2) + v2.calculaDistancia(v3) + v3.calculaDistancia(v1));
}

void Triangulo::str(){
    cout << "Triangulo";
}