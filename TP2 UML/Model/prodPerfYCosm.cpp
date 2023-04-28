/**
 * Project Untitled
 */


#include "prodPerfYCosm.h"

/**
 * prodPerfYCosm implementation
 */

//Método constructor
prodPerfYCosm::prodPerfYCosm(double precio, unsigned int stock, string codigoProd, string marca, prodPYC tipoProd) 
    : producto (precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProducto;
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


