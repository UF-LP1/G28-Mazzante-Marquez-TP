/**
 * Project Untitled
 */


#include "eLimpieza.h"
#include "empleado.h"
/**
 * eLimpieza implementation
 */


/**
 * @param turno
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
eLimpieza::eLimpieza(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo, turno t) 
    :empleado(nombre, apellido, DNI, telContacto, sueldo) {
    this->turnoTrabajo = t;
}

eLimpieza::~eLimpieza() {

}

/**
 * @param turno t
 * @return void
 */
void eLimpieza::set_turno(turno t) {
    this->turnoTrabajo = t;
}

/**
 * @return void
 */
void eLimpieza::mantenimiento_Instalaciones() {
    return;
}
