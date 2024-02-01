#ifndef INMUEBLE_H
#define INMUEBLE_H

#include <iostream>
#include <string>

class Inmueble {
private:
    float frente;
    float fondo;
    std::string ubicacion;
    float valorCatastral;

public:
    Inmueble(float frente, float fondo, std::string ubicacion, float valorCatastral);
    
    // Set
    void setFrente(float frente);
    void setFondo(float fondo);
    void setUbicacion(std::string ubicacion);
    void setValorCatastral(float valorCatastral);

    // Get
    float getFrente() const;
    float getFondo() const;
    std::string getUbicacion() const;
    float getValorCatastral() const;

    // Método polimórfico donde se imprime las caracterizticas de la propiedad
    virtual void imprimirCaracteristicas() const;

    // Método polimórfico donde se calcula el precio de venta
    virtual float precioVenta() const = 0; 
};