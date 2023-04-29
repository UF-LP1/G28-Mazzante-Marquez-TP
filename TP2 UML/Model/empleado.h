
#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "cliente.h"

class empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
empleado(string, string, string, string, unsigned int);
 
~empleado();

string get_DNI();
    
unsigned int get_sueldo();

    
/**
 * @param unsigned int
 */
void set_sueldo(unsigned int sueldo);
    
string get_telContacto();
protected: 
    const string nombre;
    const string apellido;
    const string DNI;
    string telContacto;
    unsigned int sueldo;

};

#endif //_EMPLEADO_H