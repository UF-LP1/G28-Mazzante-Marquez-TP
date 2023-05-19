
#include "farmacia.h"

/**
 * farmacia implementation
 */

//Método constructor
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

 //Método destructor
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
 * @return void
 */
void farmacia::abrir() {
    cout << "~LA FARMACIA ESTA ABIERTA~" << endl;
    return;
}

/**
 * @return void
 */
void farmacia::cerrar() {
    cout << "~LA FARMACIA ESTA CERRADA~" << endl;
    return;
}

/**
 * @return void
 */
void farmacia::adquirirFondos() {
    return;
}

void farmacia::agregar_compra(compra *co) {

    listaCompras.push_front(co);

    return;
}