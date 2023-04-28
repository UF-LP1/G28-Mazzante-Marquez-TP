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

/*
el método cobrar recibe una cola de clientes (asumimos que el cajero le va a cobrar siempre al primero de
la cola). Una vez que recibe la cola se queda con el primer elemento de tipo cliente y accede a su carrito.
El cajero chequea que el cliente efectivamente tenga un carrito y que el monto sea distinto de 0, si esto
sucede le cobra teniendo en cuenta el monto que ya presenta su carrito (ya modificado por los métodos de los 
empleados)

*/
/**
 * @param queue<cliente>listaClientes
 * @return double
 */
double cajero::cobrar(queue<cliente>listaClientes) {
   cliente clienteAux = listaClientes.front();  //esto me devuelve el primer elemento de la lista de clientes

   compra* compraAux = nullptr; //me creo un puntero de tipo compra y lo inicializo en null
   compraAux = clienteAux.get_carrito(); //me copio la dirección del carrito del cliente en mi compraAux
   
   if (compraAux == nullptr || compraAux->get_monto() == 0.0) //chequeo que exista la compra y que el monto de la compra sea != 0
       return 0.0;

   double precioTotal;

   precioTotal = compraAux->get_monto();

   




   delete[] compraAux;

   return precioTotal;
}

/**
 * @return void
 */
void cajero::entregarCompraYBolsa() {
    return;
}
