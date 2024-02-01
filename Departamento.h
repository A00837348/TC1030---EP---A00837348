#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "Inmueble.h"

class Departamento : public Inmueble {
private:
    int numPiso;
    float areaConstruida; 

public:
    Departamento(float frente, float fondo, std::string ubicacion, float valorCatastral, int numPiso, float areaConstruida); 
    void setNumPiso(int numPiso); // Set
    int getNumPiso() const; // Get
    void setAreaConstruida(float areaConstruida); // Set
    float getAreaConstruida() const; // Get
    void imprimirCaracteristicas() const override;
    float precioVenta() const override;
};