
#include "eLimpieza.h"

/**
 * eLimpieza implementation
 */

//Método constructor
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

//Método destructor
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

    bool limpio;
    limpio = false;
    srand(time_t(NULL));
    int tiempo = rand() % 2;
    if (tiempo != 0) {
        limpio = true;
        cout << "limpio";
    }
    else cout << "sucio";

    return;
}

