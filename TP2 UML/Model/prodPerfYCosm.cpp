/**
 * Project Untitled
 */


#include "prodPerfYCosm.h"

/**
 * prodPerfYCosm implementation
 */

//M�todo constructor
prodPerfYCosm::prodPerfYCosm(double precio, unsigned int stock, string codigoProd, string marca, prodPYC tipoProd) 
    : producto (precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProducto;
}

//M�todo destructor
prodPerfYCosm::~prodPerfYCosm() {

}

/**
 * @return prodPYC
 */
prodPYC prodPerfYCosm::get_tipoProducto() {
    return this->tipoProducto;
}


