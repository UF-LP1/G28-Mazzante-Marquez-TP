
#ifndef _GOLOSINA_H
#define _GOLOSINA_H

#include "producto.h"

class golosina: public producto {
public: 
    string vencimiento;
    string tipo_golosina;
    
/**
 * @param string
 * @param time_t
 */
golosina(double, unsigned int, string, string, string, string);
    
~golosina();

string get_vencimiento();

void imprimir_producto();

};

#endif //_GOLOSINA_H