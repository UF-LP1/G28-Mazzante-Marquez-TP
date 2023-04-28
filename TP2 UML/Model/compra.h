/**
 * Project Untitled
 */


#ifndef _COMPRA_H
#define _COMPRA_H

#include "producto.h"
#include "MetDePago.h"


class compra {
public: 
    
/**
 * @param double
 */
compra(double, MetDePago);

~compra();
    
/**
 * @param double d
 */
void set_monto(double d);
    
double get_monto();
    
/**
 * @param producto p
 */
void agregar_producto(producto p);
    
/**
 * @param producto p
 */
void eliminar_producto(producto p);

private: 
    double monto;
    MetDePago pago;
};

#endif //_COMPRA_H