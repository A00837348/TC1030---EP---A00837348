#ifndef LOCAL_H
#define LOCAL_H

#include "Inmueble.h"

class Local : public Inmueble {
private:
    std::string tipoLocal;
    float areaConstruida; 

public:
    Local(float frente, float fondo, std::string ubicacion, float valorCatastral, std::string tipoLocal, float areaConstruida); 
    void setTipoLocal(std::string tipoLocal); // Set
    std::string getTipoLocal() const; // Get
    void setAreaConstruida(float areaConstruida); // Set
    float getAreaConstruida() const; // Get
    void imprimirCaracteristicas() const override;
    float precioVenta() const override;
};
