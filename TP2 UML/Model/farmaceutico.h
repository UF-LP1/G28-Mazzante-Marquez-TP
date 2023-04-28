/**
 * Project Untitled
 */


#ifndef _FARMACEUTICO_H
#define _FARMACEUTICO_H

#include "empleado.h"

class farmaceutico: public empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
farmaceutico(string,string,string,string, unsigned int, string);
    
~farmaceutico();

string getNumMatricula();
    
void aconsejarDosis();
    
void recomendarRem();
    
/**
 * @param cliente c
 */
void llamarCliente(cliente c);
    
void cargarPrecio();

private: 
    const string numMatricula;
};

#endif //_FARMACEUTICO_H