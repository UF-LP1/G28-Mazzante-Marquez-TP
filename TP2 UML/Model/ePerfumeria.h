
#ifndef _EPERFUMERIA_H
#define _EPERFUMERIA_H

#include "empleado.h"

class ePerfumeria: public empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 ePerfumeria(string, string, string, string, unsigned int);
   
 ~ePerfumeria();

/**
 * @param cliente c
 */
void llamarCliente(cliente c);
    
void asesorarCliente();
    

};

#endif //_EPERFUMERIA_H