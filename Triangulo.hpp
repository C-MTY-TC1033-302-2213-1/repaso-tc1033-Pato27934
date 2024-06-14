#include <iostream>
#include <string>
#include <math.h>
#include "Punto.hpp"

class Triangulo
{
    private:
        Punto v1;
        Punto v2;
        Punto v3;
    public:
        Triangulo();
        Triangulo(Punto _v1, Punto _v2, Punto _v3);
        Punto getV1();
        Punto getV2();
        Punto getV3();
        void setV1(Punto _v1);
        void setV2(Punto _v2);
        void setV3(Punto _v3);

        double area();
        double perimetro();
        void str();
};