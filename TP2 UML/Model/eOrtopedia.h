
#ifndef _EORTOPEDIA_H
#define _EORTOPEDIA_H

#include "empleado.h"

class eOrtopedia: public empleado {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
 eOrtopedia(const string, const string, const string, const string, unsigned int);
    
 ~eOrtopedia();

void empacarProducto();
    
/**
 * @param cliente c
 */
void llamarCliente(cliente c);
    

};

#endif //_EORTOPEDIA_H