#ifndef CASA_H
#define CASA_H

#include "Inmueble.h"

class Casa : public Inmueble {
private:
    int numHabitaciones;
    int numBaños;

public:
    Casa(float frente, float fondo, std::string ubicacion, float valorCatastral, int numHabitaciones, int numBanos);
    void setNumHabitaciones(int numHabitaciones); // Set
    void setNumBanos(int numBanos); // Set
    int getNumHabitaciones() const; // Get
    int getNumBanos() const; // Get
    void imprimirCaracteristicas() const override;
    float precioVenta() const override;
};
