/**
 * Project Untitled
 */


#include "medicamento.h"

/**
 * medicamento implementation
 */


/**
 * @param string
 * @param time_t
 */
medicamento::medicamento(double precio, unsigned int stock, string codigoProd, string marca, string nombre, time_t vencimiento) 
    :producto(precio, stock, codigoProd, marca), nombre(nombre) {

    this->vencimiento = vencimiento;
}

medicamento::~medicamento() {

}

/**
 * @return time_t
 */
time_t medicamento::get_vencimiento() {
    return this->vencimiento;
}

