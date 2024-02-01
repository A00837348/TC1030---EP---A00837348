#include <iostream>
#include <vector>
#include "Inmueble.h"
#include "Local.h"
#include "Casa.h"
#include "Departamento.h"

int main() {
    Inmueble *inmueble = new Inmueble(10.0, 15.0, "Centro", 100000);
    Local *local = new Local(20.0, 30.0, "Plaza", 200000, "Plaza comercial", 150.0);
    Casa *casa = new Casa(25.0, 40.0, "Privada Residencial", 300000, 3, 2);
    Departamento *departamento = new Departamento(30.0, 35.0, "Segunda planta", 250000, 2, 100.0);

    std::vector<Inmueble*> inmuebles;
    inmuebles.push_back(inmueble);
    inmuebles.push_back(local);
    inmuebles.push_back(casa);
    inmuebles.push_back(departamento);

    for (Inmueble *propiedad : inmuebles) {
        propiedad->imprimirCaracteristicas();
        std::cout << "Precio de venta: $" << propiedad->precioVenta() << " $ ";
    }

    for (Inmueble *propiedad : inmuebles) {
        delete propiedad;
    }

    return 0;
}