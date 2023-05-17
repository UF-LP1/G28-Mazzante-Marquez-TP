
#ifndef _COMPRA_H
#define _COMPRA_H

#include "producto.h"


class compra {
public: 
    
/**
 * @param double
 */
compra(vector<producto*>, double);

compra();

~compra();
    
/**
 * @param double d
 */
void set_monto(double d);
    
double get_monto();

    
/**
 * @param producto p
 */
void agregar_producto(producto* p);
    
/**
 * @param producto p
 */
void eliminar_producto(producto* p);

vector<producto*> get_productos();

private: 
    double monto;
    vector <producto*> listaProductos;
};

#endif //_COMPRA_H