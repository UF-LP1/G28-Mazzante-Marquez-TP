/**
 cpp file class golosina
 */


#include "golosina.h"

/**
 * golosina implementation
 */


//Constructor
/**
 * @param string
 * @param time_t
 */
golosina::golosina(double precio, unsigned int codigoProd, string marca, time_t vencimiento)
    : producto (precio, codigoProd, marca) {
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
