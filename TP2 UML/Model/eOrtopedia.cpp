/**
 * Project Untitled
 */

#include "eOrtopedia.h"
#include "cliente.h"
/**
 * eOrtopedia implementation
 */

using namespace::std;
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
cliente eOrtopedia::cargarPrecio() {
    return;
}
