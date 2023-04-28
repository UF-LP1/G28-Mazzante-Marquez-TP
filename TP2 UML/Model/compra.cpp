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
compra::compra(double monto, MetDePago pago, vector<producto> listaProductos) {
    this->monto = monto;
    this->pago = pago;
    this->listaProductos = listaProductos;
}

//Método destructor
compra::~compra() {
    
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

MetDePago compra::get_pago()
{
    return this->pago;
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
vector<producto> compra::get_productos() {

    return this->listaProductos;
}
