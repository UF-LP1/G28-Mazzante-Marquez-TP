/**
 * Project Untitled
 */


#ifndef _EMOSTRADOR_H
#define _EMOSTRADOR_H

#include "empleado.h"
#include "cliente.h"


class eMostrador: public empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 eMostrador(string,string,string,string, unsigned int);

 ~eMostrador();
    
/**
 * @param cliente c
 */
void llamarCliente(cliente c);
    
void expenderRecetas();
    
double aplicarDescuento();
    
cliente cargarPago();

};

#endif //_EMOSTRADOR_H