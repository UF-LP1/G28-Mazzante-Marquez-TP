
#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "necesidad.h"
#include "compra.h"
#include "asistAutomatico.h"

class cliente {
public: 
    unsigned int num_cliente;
    
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
cliente(necesidad, string, string, string, bool, string, string, compra*);

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

string get_nombre();

string get_DNI();
    
/**
 * @param cajero c
 */
void recibir_bolsaYCompra() ;
    
void pagar();
    
/**
 * @param producto c
 */
void seleccionar_producto(producto c);
    
compra* get_carrito();

private: 
    necesidad TipoNecesidad;
    const string nombre;
    const string apellido;
    const string DNI;
    bool obraSocial;
    string telContacto;
    string mail;

    compra *carrito; //lo ponemos como *compra porque ppuede tener o 1 o 0 compras.
};

#endif //_CLIENTE_H