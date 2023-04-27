/**
 * Project Untitled
 */


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
prodPerfYCosm(double, unsigned int, string, string, prodPYC);
    
prodPYC get_tipoProducto();

~prodPerfYCosm();
};

#endif //_PRODPERFYCOSM_H