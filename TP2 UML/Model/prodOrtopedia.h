/**
 * Project Untitled
 */


#ifndef _PRODORTOPEDIA_H
#define _PRODORTOPEDIA_H

#include "producto.h"
#include "prodOrt.h"


class prodOrtopedia: public producto {
public: 
    prodOrt tipoProducto;
    
/**
 * @param prodOrt
 */
prodOrtopedia(double, unsigned int, string, string, prodOrt);
    
prodOrt get_tipoProducto();

~prodOrtopedia();
};

#endif //_PRODORTOPEDIA_H