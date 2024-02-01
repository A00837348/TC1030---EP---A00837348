#include "Inmueble.h"

Inmueble::Inmueble(float frente, float fondo, std::string ubicacion, float valorCatastral)
    : frente(frente), fondo(fondo), ubicacion(ubicacion), valorCatastral(valorCatastral) {}

void Inmueble::setFrente(float frente) { // Set
    this->frente = frente;
}

void Inmueble::setFondo(float fondo) { // Set
    this->fondo = fondo;
}

void Inmueble::setUbicacion(std::string ubicacion) { // Set
    this->ubicacion = ubicacion;
}

void Inmueble::setValorCatastral(float valorCatastral) { // Set
    this->valorCatastral = valorCatastral;
}

float Inmueble::getFrente() const { // Get
    return frente;
}

float Inmueble::getFondo() const { // Get
    return fondo;
}

std::string Inmueble::getUbicacion() const { // Get
    return ubicacion;
}

float Inmueble::getValorCatastral() const { // Get
    return valorCatastral;
}

void Inmueble::imprimirCaracteristicas() const {
    std::cout << "Frente: " << frente << " m "
              << "Fondo: " << fondo << " m "
              << "Ubicacion: " << ubicacion << 
              << "Valor Catastral: $" << valorCatastral << "$";
}