/**
 * Project Untitled
 */


#include "Cajero.h"

/**
 * Cajero implementation
 */


//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */

cajero::cajero(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo) 
     :empleado(nombre, apellido, DNI, telContacto, sueldo) {

}

//Método destructor
cajero::~cajero() {

}

/**
 * @param cliente c
 * @return compra
 */
compra cajero::cobrar() {
    return;
}

/**
 * @return void
 */
void cajero::entregarCompraYBolsa() {
    return;
}
