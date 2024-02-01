#include "Casa.h"

Casa::Casa(float frente, float fondo, std::string ubicacion, float valorCatastral, int numHabitaciones, int numBaños)
    : Inmueble(frente, fondo, ubicacion, valorCatastral), numHabitaciones(numHabitaciones), numBaños(numBaños) {}

void Casa::setNumHabitaciones(int numHabitaciones) { // Set
    this->numHabitaciones = numHabitaciones;
}

void Casa::setNumBaños(int numBaños) { // Set
    this->numBaños = numBaños;
}

int Casa::getNumHabitaciones() const { // Get
    return numHabitaciones;
}

int Casa::getNumBaños() const { // Get
    return numBaños;
}

void Casa::imprimirCaracteristicas() const {
    Inmueble::imprimirCaracteristicas();
    std::cout << "Numero de habitaciones: " << numHabitaciones << " Habitaciones "
              << "Numero de baños: " << numBaños << " Baños ";
}

float Casa::precioVenta() const {
    if (ubicacion == "Privada Residencial")
        return valorCatastral * 0.5 / 1.5;
    else if (ubicacion == "Calle")
        return valorCatastral * 0.2 / 1.2;
    else
        return valorCatastral;
}