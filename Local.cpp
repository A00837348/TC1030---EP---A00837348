#include "Local.h"

Local::Local(float frente, float fondo, std::string ubicacion, float valorCatastral, std::string tipoLocal, float areaConstruida)
    : Inmueble(frente, fondo, ubicacion, valorCatastral), tipoLocal(tipoLocal), areaConstruida(areaConstruida) {}

void Local::setTipoLocal(std::string tipoLocal) { // Set
    this->tipoLocal = tipoLocal;
}

std::string Local::getTipoLocal() const { // Get
    return tipoLocal;
}

void Local::setAreaConstruida(float areaConstruida) { // Set
    this->areaConstruida = areaConstruida;
}

float Local::getAreaConstruida() const { // Get
    return areaConstruida;
}

void Local::imprimirCaracteristicas() const {
    Inmueble::imprimirCaracteristicas();
    std::cout << "Tipo de Local: " << tipoLocal 
              << "Area Construida: " << areaConstruida << " m^2 ";
}

float Local::precioVenta() const {
    if (tipoLocal == "Plaza comercial")
        return valorCatastral * 0.2 / 1.2;
    else if (tipoLocal == "Sobre avenida")
        return valorCatastral * 0.1 / 1.1;
    else
        return valorCatastral;
}