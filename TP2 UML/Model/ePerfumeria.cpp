/**
 * Project Untitled
 */


#include "ePerfumeria.h"
#include "empleado.h"

/**
 * ePerfumeria implementation
 */


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
cliente ePerfumeria::cargarPrecio() {
    return;
}

