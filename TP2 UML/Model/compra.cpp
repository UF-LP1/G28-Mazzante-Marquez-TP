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
compra::compra(vector <producto*> listaProductos, double monto = 0) {
    this->monto = monto;
    this->listaProductos = vector<producto*>(listaProductos.begin(), listaProductos.end());
}

compra::compra() {
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


/**
 * @param producto p
 * @return void
 */
void compra::agregar_producto(producto* p) {

    listaProductos.push_back(p);

    monto += p->precio;

    return;
}

/**
 * @param producto p
 * @return void
 */
void compra::eliminar_producto(producto *p) {

    if(monto == 0)  //si el monto es 0 significa que no tiene ningun producto agregado (no le puedo eliminar ningun producto)
        return;

    for (int i = 0; i < listaProductos.size(); i++)
    {
        if (listaProductos[i]->codigoProd == p->codigoProd) {

            listaProductos.erase(listaProductos.begin()+i);

            monto = monto - p->precio;
        }
    }
    return;
}

vector <producto*> compra::get_productos() {

    return this->listaProductos;
}
