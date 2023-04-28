/**
 * Project Untitled
 */


#include "compra.h"

/**
 * compra implementation
 */

//Método constructor
/**
 * @param double
 */
compra::compra(double monto, MetDePago pago) {
    this->monto = monto;
    this->pago = pago;
}

//Método destructor
compra::~compra() {
    delete[] &listaProductos;
}

/**
 * @param double d
 * @return void
 */
void compra::set_monto(double monto) {
    this->monto = monto;
}

/**
 * @return double
 */
double compra::get_monto() {
    return this->monto;
}

forward_list<producto> compra::get_listaProductos()
{
    return this->forward_list<producto>();
}

/**
 * @param producto p
 * @return void
 */
void compra::agregar_producto(producto p) {
    return;
}

/**
 * @param producto p
 * @return void
 */
void compra::eliminar_producto(producto p) {
    return;
}
