
#include "empleado.h"

/**
 * empleado implementation
 */

//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
empleado::empleado(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo) :nombre(nombre), apellido(apellido), DNI(DNI) {
 
    this->telContacto = telContacto;
    this->sueldo = sueldo;
}

//Método destructor
empleado::~empleado() {

}

/**
 * @return string
 */
string empleado::get_DNI() {
    return this->DNI;
}

/**
 * @return unsigned int
 */
unsigned int empleado::get_sueldo() {
    return this->sueldo;
}

void empleado::llamarCliente(cliente c)
{
    cout << "que pase el: " << c.num_Cliente;
}

/**
 * @param unsigned int
 * @return void
 */
 void empleado::set_sueldo(unsigned int sueldo) {
    this->sueldo = sueldo;
    return;
}

/**
 * @return string
 */
string empleado::get_telContacto() {
    return this->telContacto;
}
