/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "necesidad.h"
#include "compra.h"
#include "asistAutomatico.h"

class cliente {
public: 
    const int num;
    
/**
 * @param necesidad
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param string
 * @param string
 * @param int
 * @param MetDePago
 */
cliente(necesidad, string, string, string, bool, string, string, int, compra*);

~cliente();
    
necesidad get_TipoNecesidad();
    
/**
 * @param necesidad n
 */
void set_TipoNecesidad(necesidad n);
    
bool get_obraSocial();  
    
/**
 * @param cajero c
 */
void recibir_factura() ;
    
/**
 * @param cajero c
 */
void recibir_bolsaYCompra() ;
    
void pagar();
    
/**
 * @param producto c
 */
void seleccionar_producto(producto c);
    
void ver_carrito();

private: 
    necesidad TipoNecesidad;
    const string nombre;
    const string apellido;
    const string DNI;
    bool obraSocial;
    string telContacto;
    string mail;

    compra *carrito;
};

#endif //_CLIENTE_H