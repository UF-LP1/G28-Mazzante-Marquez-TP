
#include "golosina.h"

/**
 * golosina implementation
 */

//Constructor
/**
 * @param string
 * @param time_t
 */
golosina::golosina(double precio, unsigned int stock, string codigoProd , string marca, string vencimiento, string tipo_golosina)
    : producto (precio, stock, codigoProd, marca) {
    this->vencimiento = vencimiento;
    this->tipo_golosina = tipo_golosina;
}

//Destructor
golosina::~golosina() {

}

/**
 * @return time_t
 */
string golosina::get_vencimiento() {
    return this->vencimiento;
}

void golosina::imprimir_producto()
{
    cout << "Producto - " << this->tipo_golosina << ", $"<<this->precio<< endl;
}



