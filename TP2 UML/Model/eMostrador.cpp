/**
 * Project Untitled
 */


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
double eMostrador::aplicarDescuento() {
    return 0.0;
}

/**
 * @return cliente
 */
void eMostrador::cargarPago() {
    return;
}
