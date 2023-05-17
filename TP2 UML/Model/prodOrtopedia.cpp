
#include "prodOrtopedia.h"

/**
 * prodOrtopedia implementation
 */

//Método constructor
prodOrtopedia::prodOrtopedia(double precio, unsigned int stock, string codigoProd, string marca, prodOrt tipoProducto)
    : producto (precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProducto;
}

//Método destructor
prodOrtopedia::~prodOrtopedia() {

}

void prodOrtopedia::imprimir_producto()
{
    cout << "0: vendasElasticas - 1: cabestrillos - 2: mediasDeCompresion" << endl;
    cout << "Producto - " << this->tipoProducto<< endl;
}

/**
 * @return prodOrt
 */
prodOrt prodOrtopedia::get_tipoProducto() {
    return this->tipoProducto;
}
