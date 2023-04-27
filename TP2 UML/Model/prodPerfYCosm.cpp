/**
 * Project Untitled
 */


#include "prodPerfYCosm.h"

/**
 * prodPerfYCosm implementation
 */


prodPerfYCosm::prodPerfYCosm(double precio, unsigned int stock, string codigoProd, string marca, prodPYC tipoProd) 
    : producto (precio, stock, codigoProd, marca)
{

}

prodPerfYCosm::~prodPerfYCosm() {

}

/**
 * @return prodPYC
 */
prodPYC prodPerfYCosm::get_tipoProducto() {
    return this->tipoProducto;
}

prodPerfYCosm::~prodPerfYCosm() {
}

