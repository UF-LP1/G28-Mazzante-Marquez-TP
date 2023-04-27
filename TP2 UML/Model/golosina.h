/**
 header file class golosina
 */


#ifndef _GOLOSINA_H
#define _GOLOSINA_H

#include <string>
#include "producto.h"
#include <iostream>



using namespace std;


class golosina: public producto {
public: 
    time_t vencimiento;
    
/**
 * @param string
 * @param time_t
 */
golosina(double, unsigned int, string, string, time_t);
    
~golosina();

time_t get_vencimiento();

};

#endif //_GOLOSINA_H