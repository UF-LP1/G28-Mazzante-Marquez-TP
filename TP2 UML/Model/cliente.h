
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
cliente(necesidad, string, string, string, bool, string, string, compra*, float);

~cliente();
    
necesidad get_TipoNecesidad();

void set_TipoNecesidad(necesidad n);
    
bool get_obraSocial();  
    
string get_nombre();

string get_DNI();

compra* get_carrito();

void ver_carrito();



void recibir_factura() ;
    
/**
 * @param cajero c
 */
void recibir_bolsaYCompra() ;
    
void pagar(float nuevabilletera);
    
/**
 * @param producto c
 */
void seleccionar_producto(producto c);

float get_billetera();

 


private: 
    necesidad TipoNecesidad;
    const string nombre;
    const string apellido;
    const string DNI;
    bool obraSocial;
    string telContacto;
    string mail;
    float billetera;

    compra *carrito; //lo ponemos como *compra porque ppuede tener o 1 o 0 compras.
};

#endif //_CLIENTE_H