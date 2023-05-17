
#include "prodPerfYCosm.h"

/**
 * prodPerfYCosm implementation
 */

//Método constructor
prodPerfYCosm::prodPerfYCosm(double precio, unsigned int stock, string codigoProd, string marca, prodPYC tipoProd)
    : producto(precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProd;

}

//Método destructor
prodPerfYCosm::~prodPerfYCosm() {

}

/**
 * @return prodPYC
 */
prodPYC prodPerfYCosm::get_tipoProducto() {
    return this->tipoProducto;
}

void prodPerfYCosm::imprimir_producto()
{
    cout << "Producto - " << this->tipoProducto << endl;
}


