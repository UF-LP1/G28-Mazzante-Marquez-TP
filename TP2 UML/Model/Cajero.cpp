
#include "Cajero.h"
#include <exception>
/**
 * cajero implementation
 */

//M�todo constructor
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

//M�todo destructor
cajero::~cajero() {

}

/**
 * @param queue<cliente>listaClientes
 * @return double
 */
double cajero::cobrar(cliente *clienteAux) {

   compra* compraAux1 = nullptr; //me creo un puntero de tipo compra y lo inicializo en null
   compraAux1 = clienteAux->get_carrito(); //me copio la direcci�n del carrito del cliente en mi compraAux
   
   if (compraAux1 == nullptr || compraAux1->get_monto() == 0.0) //chequeo que exista la compra y que el monto de la compra sea != 0
       return 0.0;

   double precioTotal;

   precioTotal = compraAux1->get_monto(); 

   MetDePago formaDePago = clienteAux->get_pago();

   try {
       float pago = clienteAux->get_billetera() - precioTotal;
        clienteAux->pagar(pago);
       if (pago < 0.0) throw exception(" no cuenta con suficiente dinero");
   }
   catch (exception& nohayplata) {
       cout << "El cliente " << clienteAux->get_nombre() << nohayplata.what() << endl << endl;
       return 0;
   }

   if (clienteAux->get_obraSocial())
       compraAux1->set_monto(compraAux1->get_monto() * 0.9);

   return compraAux1->get_monto();

}

void cajero::imprimir_factura(cliente clienteAux, double precioTotal) {

    cout << endl<< "DNI cliente: " << clienteAux.get_DNI() << endl << "Nombre cliente: " << clienteAux.get_nombre()
        << endl;
    
    MetDePago metpago = clienteAux.get_pago();
    cout << "Metodo de pago: ";
    switch (metpago)
    {
    case efectivo: cout << "efectivo" << endl;
        break;
    case tarjetadecredito: cout << "tarjeta de credito" << endl;
        break;
    case tarjetaDeDebito: cout << "tarjeta de debito" << endl;
        break;
    case AppPagoCelular: cout << "App de Pago celular" << endl;
        break;
    default:
        break;
    }
        cout<< "Monto: $" << clienteAux.get_carrito()->get_monto() <<  endl  <<  endl;    
    return;
}

/**
 * @return void
 */
void cajero::entregarCompraYBolsa() {
    return;
}
