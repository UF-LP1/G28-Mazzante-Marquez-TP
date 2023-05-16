#include "compra.h"

/**
 * compra implementation
 */

/**
 * compra implementation
 */

//Método constructor
/**
 * @param double
 */
compra::compra(MetDePago pago, vector <producto> listaProductos, double monto = 0) {
    this->monto = monto;
    this->pago = pago;
    this->listaProductos = vector<producto>(listaProductos.begin(), listaProductos.end());
}

compra::compra(MetDePago pago) {
    this->pago = pago;
    this->monto = 0,0;
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

    listaProductos.push_back(p);

    monto += p.precio;

    return;
}

/**
 * @param producto p
 * @return void
 */
void compra::eliminar_producto(producto p) {

    for (int i = 0; i < listaProductos.size(); i++)
    {
        if (listaProductos[i].codigoProd == p.codigoProd) {

            listaProductos.erase(listaProductos.begin()+i);

            monto = monto - p.precio;
        }
    }
    return;
}

vector <producto> compra::get_productos() {

    return this->listaProductos;
}
