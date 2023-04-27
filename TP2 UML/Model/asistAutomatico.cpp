/*
* cpp file class asistAutomatico
 */

#include "asistAutomatico.h"


//Método constructor
/**
 * @param unsigned int
 */
asistAutomatico::asistAutomatico(unsigned int numero) {
    this->numero = numero;
}

//Método destructor
asistAutomatico::~asistAutomatico(){

}

//Método de generar número de atención
/**
 * @return int
 */
int asistAutomatico::generar_numero() {
    return 0;
}

//Método para setear el número de atención
/**
 * @param int
 * @return void
 */
void asistAutomatico::set_numero(int numero) {
    this->numero = numero;
}

//Método para getear el número de atención
/**
 * @return int
 */
int asistAutomatico::get_numero() {
    return this->numero;
}