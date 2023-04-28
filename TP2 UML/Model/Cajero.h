/**
 * Project Untitled
 */


#ifndef _CAJERO_H
#define _CAJERO_H

#include "empleado.h"
#include "compra.h"

class cajero: public empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 cajero(string,string, string, string, unsigned int);

 ~cajero();
    
/**
 * @param cliente c
 */
compra cobrar();
    
void entregarCompraYBolsa();

};

#endif //_CAJERO_H