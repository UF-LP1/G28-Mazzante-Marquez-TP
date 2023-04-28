/**
 * Project Untitled
 */


#include "ePerfumeria.h"

/**
 * ePerfumeria implementation
 */

//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 ePerfumeria::ePerfumeria(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo) 
     :empleado(nombre, apellido, DNI, telContacto, sueldo) {

}

 //Método destructor
 ePerfumeria:: ~ePerfumeria() {
 }

/**
 * @param cliente c
 * @return void
 */
void ePerfumeria::llamarCliente(cliente c) {
    return;
}

/**
 * @return void
 */
void ePerfumeria::asesorarCliente() {
    return;
}

/**
 * @return cliente
 */
void ePerfumeria::cargarPrecio() {
    return;
}

