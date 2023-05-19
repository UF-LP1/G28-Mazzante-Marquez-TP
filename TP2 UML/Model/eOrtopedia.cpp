
#include "eOrtopedia.h"

/**
 * eOrtopedia implementation
 */

//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 eOrtopedia::eOrtopedia(const string nombre, const string apellido, const string DNI, const string telContacto, unsigned int sueldo)
    : empleado(nombre, apellido, DNI, telContacto, sueldo)
{

}

 //Método destructor
 eOrtopedia::~eOrtopedia() {

 }

/**
 * @return void
 */
void eOrtopedia::empacarProducto() {
    return;
}

/**
 * @param cliente c
 * @return void
 */
void eOrtopedia::llamarCliente(cliente c) {
    return;
}

/**
 * @return cliente
 */

