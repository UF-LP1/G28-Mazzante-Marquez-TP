
#ifndef _GOLOSINA_H
#define _GOLOSINA_H

#include "producto.h"

class golosina: public producto {
public: 
    time_t vencimiento;
    string tipo_golosina;
    
/**
 * @param string
 * @param time_t
 */
golosina(double, unsigned int, string, string, time_t, string);
    
~golosina();

time_t get_vencimiento();

void imprimir_producto();

};

#endif //_GOLOSINA_H