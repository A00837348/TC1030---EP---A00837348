#include "Departamento.h"

Departamento::Departamento(float frente, float fondo, std::string ubicacion, float valorCatastral, int numPiso, float areaConstruida)
    : Inmueble(frente, fondo, ubicacion, valorCatastral), numPiso(numPiso), areaConstruida(areaConstruida) {}

void Departamento::setNumPiso(int numPiso) { // Set
    this->numPiso = numPiso;
}

int Departamento::getNumPiso() const { // Get
    return numPiso;
}

void Departamento::setAreaConstruida(float areaConstruida) { // Set
    this->areaConstruida = areaConstruida;
}

float Departamento::getAreaConstruida() const { // Get
    return areaConstruida;
}

void Departamento::imprimirCaracteristicas() const {
    Inmueble::imprimirCaracteristicas();
    std::cout << "Numero de piso: " << numPiso << 
              << "Area Construida: " << areaConstruida << " m^2 ";
}

float Departamento::precioVenta() const {
    if (numPiso == 1)
        return valorCatastral * 0.2 / 1.2;
    else
        return valorCatastral * 0.1 / 1.1;
}