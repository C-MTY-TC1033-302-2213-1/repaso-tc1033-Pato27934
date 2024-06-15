//
//  Prueba1
//

#ifndef Punto_hpp
#define Punto_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

class Punto
{
    private:
        //Atributos
        double x;
        double y;
    public:
        //Metodos
        Punto();
        Punto(double _x, double _y);
        //Getters y Setters
        double getX();
        double getY();
        void setX(double _x);
        void setY(double _y);
        //Funciones
        double calculaDistancia(Punto p2);
        void muestraPunto();

};
#endif