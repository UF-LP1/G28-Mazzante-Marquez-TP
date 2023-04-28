/**
 * Project Untitled
 */


#ifndef _COMPRA_H
#define _COMPRA_H

#include "MetDePago.h"
#include "producto.h"
#include <forward_list>

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

forward_list <producto> get_listaProductos();
    
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

    forward_list <producto> listaProductos;
};

#endif //_COMPRA_H