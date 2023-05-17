
#include "Cajero.h"
#include <exception>
/**
 * cajero implementation
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
double cajero::cobrar(cliente *clienteAux) {

   compra* compraAux1 = nullptr; //me creo un puntero de tipo compra y lo inicializo en null
   compraAux1 = clienteAux->get_carrito(); //me copio la dirección del carrito del cliente en mi compraAux
   
   if (compraAux1 == nullptr || compraAux1->get_monto() == 0.0) //chequeo que exista la compra y que el monto de la compra sea != 0
       return 0.0;

   double precioTotal;

   precioTotal = compraAux1->get_monto(); 

   MetDePago formaDePago = clienteAux->get_pago();

   try {
       float pago = clienteAux->get_billetera() - precioTotal;
        clienteAux->pagar(pago);
       if (pago < 0.0) throw exception();
   }
   catch (exception& nohayplata) {
       cout << endl << "el cliente " << clienteAux->get_nombre()<<" no cuenta con suficiente dinero"<< endl << endl;
       return 0;
   }

   if (clienteAux->get_obraSocial())
       return precioTotal * 0.9;                                             //le hago un 10% de descuento si tiene obra socia
   else
       return precioTotal;
}

void cajero::imprimir_factura(cliente clienteAux, double precioTotal) {

    cout << "DNI cliente: " << clienteAux.get_DNI() << endl << "Nombre cliente: " << clienteAux.get_nombre()
        << endl << "Metodo de pago (0: efectivo, 1: tarjeta de credito, 2: tarjeta de debito, 3: App de celular) : " 
        << clienteAux.get_pago() << endl << "Monto: $" << precioTotal<<endl<<endl;

    
    return;
}

/**
 * @return void
 */
void cajero::entregarCompraYBolsa() {
    return;
}
