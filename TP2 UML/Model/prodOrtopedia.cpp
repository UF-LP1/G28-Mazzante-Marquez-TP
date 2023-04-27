/**
 * Project Untitled
 */


#include "prodOrtopedia.h"

/**
 * prodOrtopedia implementation
 */


prodOrtopedia::prodOrtopedia(double precio, unsigned int stock, string codigoProd, string marca, prodOrt tipoProducto)
    : producto (precio, stock, codigoProd, marca)
{
  
}

prodOrtopedia::~prodOrtopedia() {

}


/**
 * @return prodOrt
 */
prodOrt prodOrtopedia::get_tipoProducto() {
    return this->tipoProducto;
}

prodOrtopedia::~prodOrtopedia() {

}

