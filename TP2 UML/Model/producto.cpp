
#include "producto.h"

/**
 * producto implementation
 */

//M�todo constructor
/**
 * @param double
 * @param unsigned int
 * @param string
 * @param string
 */
producto::producto(double precio, unsigned int stock, string codigoProd, string marca){
    this->precio = precio;
    this->stock = stock;
    this->codigoProd = codigoProd;
    this->marca = marca;
}

//M�todo destructor
producto::~producto() {

}

/**
 * @return double
 */
double producto::get_precio() {
    return this->precio;
}

/**
 * @param double
 * @return void
 */
void producto::set_precio(double precio) {
    this->precio = precio;
}

/**
 * @return unsigned int
 */
unsigned int producto::get_stock() {
    return this-> stock;
}

void producto::set_stock(unsigned int stock)
{
    this->stock = stock;
}

/**
 * @return string
 */
string producto::get_codigoProd() {
    return this->codigoProd;
}
