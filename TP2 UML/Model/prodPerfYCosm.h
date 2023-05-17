
#ifndef _PRODPERFYCOSM_H
#define _PRODPERFYCOSM_H

#include "producto.h"
#include "prodPYC.h"

class prodPerfYCosm: public producto {
public: 
    prodPYC tipoProducto;
    
/**
 * @param prodPYC
 */
prodPerfYCosm(double precio, unsigned int stock, string codigoProd, string marca, prodPYC tipoProd);
    
~prodPerfYCosm();

prodPYC get_tipoProducto();

void imprimir_producto();
};

#endif //_PRODPERFYCOSM_H