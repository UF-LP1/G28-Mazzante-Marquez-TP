
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
    cout << "0: champu - 1: desorante - 2: jabon - 3: cremaCuerpo - 4: cremaCara - 5: perfume - 6: maquillaje - 7: esmalteUnia" << endl;
    cout << "Producto - " << this->tipoProducto << endl;
}


