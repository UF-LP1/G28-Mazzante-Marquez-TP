
#include "farmacia.h"

/**
 * farmacia implementation
 */

//M�todo constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned long int
 */
 farmacia::farmacia(string horarioSemana,string horarioFinDeSemana, string nombre, string direccion, string telContacto,string mail,unsigned long int fondos) 
     :nombre(nombre) {
     this->horarioSemana = horarioSemana;
     this->horarioFinDeSemana = horarioFinDeSemana;
     this->direccion = direccion;
     this->telContacto = telContacto;
     this->mail = mail;
     this->fondos = fondos;
}

 //M�todo destructor
 farmacia:: ~farmacia() {

}

/**
 * @return long int
 */
long int farmacia::get_fondos() {
    return this->fondos;
}

/**
 * @param long int f
 * @return void
 */
void farmacia::set_fondos(long int f) {
    this->fondos = f;
    return;
}

/**
 * @param string h
 * @return void
 */
void farmacia::set_horarioSemana(string h) {
    this->horarioSemana = h;
    return;
}

/**
 * @param compra co
 * @return void
 */
void farmacia::agregar_compra(compra co) {
    return;
}

/**
 * @return void
 */
void farmacia::abrir() {
    return;
}

/**
 * @return void
 */
void farmacia::cerrar() {
    return;
}

/**
 * @return void
 */
void farmacia::adquirirFondos() {
    return;
}