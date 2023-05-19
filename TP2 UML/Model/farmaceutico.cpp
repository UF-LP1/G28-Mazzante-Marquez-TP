
#include "farmaceutico.h"

/**
 * farmaceutico implementation
 */

//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
farmaceutico::farmaceutico(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo, string numMatricula) 
    :empleado(nombre, apellido, DNI, telContacto, sueldo), numMatricula(numMatricula) {

}

//Método destructor
farmaceutico::~farmaceutico() {

}

/**
 * @return string
 */
string farmaceutico::getNumMatricula() {
    return this->numMatricula;
}

/**
 * @return void
 */
void farmaceutico::aconsejarDosis() {
    return;
}

/**
 * @return void
 */
void farmaceutico::recomendarRem() {
    return;
}

/**
 * @param cliente c
 * @return void
 */
void farmaceutico::llamarCliente(cliente c) {
    return;
}

/**
 * @return cliente
 */

