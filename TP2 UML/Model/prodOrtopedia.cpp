
#include "prodOrtopedia.h"

/**
 * prodOrtopedia implementation
 */

//M�todo constructor
prodOrtopedia::prodOrtopedia(double precio, unsigned int stock, string codigoProd, string marca, prodOrt tipoProducto)
    : producto (precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProducto;
}

//M�todo destructor
prodOrtopedia::~prodOrtopedia() {

}

/**
 * @return prodOrt
 */
prodOrt prodOrtopedia::get_tipoProducto() {
    return this->tipoProducto;
}
