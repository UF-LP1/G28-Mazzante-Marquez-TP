
#include "medicamento.h"

/**
 * medicamento implementation
 */

//Método constructor
/**
 * @param string
 * @param time_t
 */
medicamento::medicamento(double precio, unsigned int stock, string codigoProd, string marca, string nombre, string vencimiento) 
    :producto(precio, stock, codigoProd, marca), nombre(nombre) {

    this->vencimiento = vencimiento;
}

//Método destructor
medicamento::~medicamento() {

}

/**
 * @return time_t
 */
string medicamento::get_vencimiento() {
    return this->vencimiento;
}

void medicamento::imprimir_producto()
{
    cout << "Producto -  " << this->nombre << ", $"<<this->precio<< endl;
}

