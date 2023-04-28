/**
 * Project Untitled
 */


#include "Cajero.h"

/**
 * Cajero implementation
 */


//Método constructor
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */

cajero::cajero(string nombre, string apellido, string DNI, string telContacto, unsigned int sueldo) 
     :empleado(nombre, apellido, DNI, telContacto, sueldo) {

}

//Método destructor
cajero::~cajero() {

}

/**
 * @param queue<cliente>listaClientes
 * @return double
 */
double cajero::cobrar(cliente* clienteAux) {

   compra* compraAux = nullptr; //me creo un puntero de tipo compra y lo inicializo en null
   compraAux = clienteAux->get_carrito(); //me copio la dirección del carrito del cliente en mi compraAux
   
   if (compraAux == nullptr || compraAux->get_monto() == 0.0) //chequeo que exista la compra y que el monto de la compra sea != 0
       return 0.0;

   double precioTotal;

   precioTotal = compraAux->get_monto(); 

   MetDePago formaDePago = compraAux->get_pago();

   delete[] compraAux;
   return precioTotal;
}

/**
 * @return void
 */
void cajero::entregarCompraYBolsa() {
    return;
}
