
#ifndef _COMPRA_H
#define _COMPRA_H

#include "producto.h"
#include "MetDePago.h"


class compra {
public: 
    
/**
 * @param double
 */
compra(MetDePago, vector<producto>, double);

compra(MetDePago pago = efectivo);

~compra();
    
/**
 * @param double d
 */
void set_monto(double d);
    
double get_monto();

MetDePago get_pago();
    
/**
 * @param producto p
 */
void agregar_producto(producto p);
    
/**
 * @param producto p
 */
void eliminar_producto(producto p);

vector<producto> get_productos();

private: 
    double monto;
    MetDePago pago;
    vector <producto> listaProductos;
};

#endif //_COMPRA_H