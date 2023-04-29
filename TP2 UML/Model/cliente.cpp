
#include "cliente.h"

/**
 * cliente implementation
 */

//Metodo constructor
/**
 * @param necesidad
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param string
 * @param string
 * @param int
 * @param MetDePago
 */
cliente::cliente(necesidad n, string nombre,string apellido,string DNI, bool obraSocial,string telContacto, string mail, int num, compra * co) 
    :nombre(nombre), apellido(apellido), DNI(DNI), num(num){
    this->TipoNecesidad= n;
    this->obraSocial = obraSocial;
    this->telContacto = telContacto;
    this->mail = mail;
    carrito = co;
}

//Método destructor
cliente::~cliente() {
    delete[] carrito;
}

/**
 * @return necesidad
 */
necesidad cliente::get_TipoNecesidad() {
    return this->TipoNecesidad;
}

/**
 * @param necesidad n
 * @return void
 */
void cliente::set_TipoNecesidad(necesidad n) {
    this->TipoNecesidad = n;
    return;
}

/**
 * @return bool
 */
bool cliente::get_obraSocial() {
    return this->obraSocial;
}

/**
 * @param cajero c
 * @return void
 */
void cliente::recibir_factura() {
    return;
}

string cliente::get_nombre()
{
    return this->nombre;
}

string cliente::get_DNI()
{
    return this->DNI;
}

/**
 * @param cajero c
 * @return void
 */
void cliente::recibir_bolsaYCompra() {
    return;
}

/**
 * @return void
 */
void cliente::pagar() {
    return;
}

/**
 * @param producto c
 * @return void
 */
void cliente::seleccionar_producto(producto c) {
    if (carrito == nullptr) {
        carrito = new compra();
    }
    carrito->agregar_producto(c);
}

/**
 * @return void
 */
compra* cliente::get_carrito() {

    return this->carrito;
}

