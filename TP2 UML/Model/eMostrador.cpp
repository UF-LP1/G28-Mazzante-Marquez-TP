
#include "eMostrador.h"

/**
 * eMostrador implementation
 */

//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 eMostrador::eMostrador(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo)
     :empleado(nombre, apellido, DNI, telContacto, sueldo) {

}

 //Método destructor
 eMostrador::~eMostrador(){

 }

/**
 * @param cliente c
 * @return void
 */
void eMostrador::llamarCliente(cliente c) {
    return;
}

/**
 * @return void
 */
void eMostrador::expenderRecetas() {
    return;
}

/**
 * @return double
 */
bool eMostrador::aplicarDescuento(cliente c) {  //se pudo haber hecho directamente en cajero pero la consigna establecia que el mostrador era el que aplicaba el descuento

    bool descuentoSi = false;

    if (c.get_obraSocial()) {
        descuentoSi = true;
    }
    return descuentoSi;
}

/**
 * @return cliente
 */
void eMostrador::cargarPago() {
    return;
}
