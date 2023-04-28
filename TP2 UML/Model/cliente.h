/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "necesidad.h"
#include "asistAutomatico.h"
#include "cajero.h"
#include "producto.h"
#include "compra.h"
#include <forward_list>

using namespace std;

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
cliente(necesidad, string, string, string, bool, string, string, int);

~cliente();
    
necesidad get_TipoNecesidad();
    
/**
 * @param necesidad n
 */
void set_TipoNecesidad(necesidad n);
    
bool get_obraSocial();

forward_list <compra> get_listaCompras(); //hago este método xq la lista de compras es un atributo privado
    
    
/**
 * @param cajero c
 */
void recibir_factura(cajero c) ;
    
/**
 * @param cajero c
 */
void recibir_bolsaYCompra(cajero c) ;
    
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

    forward_list <compra> listaCompras;
};

#endif //_CLIENTE_H