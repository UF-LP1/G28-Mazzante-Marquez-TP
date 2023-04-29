
#ifndef _CAJERO_H
#define _CAJERO_H

#include "empleado.h"

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

double cobrar(cliente *c);

void imprimir_factura(cliente clienteAux, double precioTotal);
    
void entregarCompraYBolsa();


};

#endif //_CAJERO_H