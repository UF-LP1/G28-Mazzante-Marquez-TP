
#include "asistAutomatico.h"

/**
 * asistAutomatico implementation
 */

//M�todo constructor
/**
 * @param unsigned int
 */
asistAutomatico::asistAutomatico() {
    return;
}

//M�todo destructor
asistAutomatico::~asistAutomatico(){

}

//M�todo para getear el n�mero de atenci�n
/**
 * @return int
 */
unsigned int asistAutomatico::get_numero() {
    return numero_clientes;
}