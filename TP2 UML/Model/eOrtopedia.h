/**
 * Project Untitled
 */


#ifndef _EORTOPEDIA_H
#define _EORTOPEDIA_H

#include "empleado.h"

using namespace::std;

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
    
cliente cargarPrecio();

};

#endif //_EORTOPEDIA_H