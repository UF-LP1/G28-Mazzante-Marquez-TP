/*
* cpp file class asistAutomatico
 */

#include "asistAutomatico.h"


//M�todo constructor
/**
 * @param unsigned int
 */
asistAutomatico::asistAutomatico(unsigned int numero) {
    this->numero = numero;
}

//M�todo destructor
asistAutomatico::~asistAutomatico(){

}

//M�todo de generar n�mero de atenci�n
/**
 * @return int
 */
int asistAutomatico::generar_numero() {
    return 0;
}

//M�todo para setear el n�mero de atenci�n
/**
 * @param int
 * @return void
 */
void asistAutomatico::set_numero(int numero) {
    this->numero = numero;
}

//M�todo para getear el n�mero de atenci�n
/**
 * @return int
 */
int asistAutomatico::get_numero() {
    return this->numero;
}