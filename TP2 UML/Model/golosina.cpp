
#include "golosina.h"

/**
 * golosina implementation
 */

//Constructor
/**
 * @param string
 * @param time_t
 */
golosina::golosina(double precio, unsigned int stock, string codigoProd , string marca, time_t vencimiento)
    : producto (precio, stock, codigoProd, marca) {
    this->vencimiento = vencimiento;
}

//Destructor
golosina::~golosina() {

}

/**
 * @return time_t
 */
time_t golosina::get_vencimiento() {
    return this->vencimiento;
}

void golosina::imprimir_producto()
{
    cout << "Producto - " << this->marca;
}



