
#include "asistAutomatico.h"

/**
 * asistAutomatico implementation
 */

//Método constructor
/**
 * @param unsigned int
 */
asistAutomatico::asistAutomatico() {
    return;
}

//Método destructor
asistAutomatico::~asistAutomatico(){

}

//Método para getear el número de atención
/**
 * @return int
 */
unsigned int asistAutomatico::get_numero() {
    return numero_clientes;
}