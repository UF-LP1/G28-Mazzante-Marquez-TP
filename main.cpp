//MAIN.CPP

#include <queue>
#include <string>
#include <iostream>
#include "TP2 UML/Model/cliente.h"
#include "TP2 UML/Model/empleado.h"
#include "TP2 UML/Model/necesidad.h"
#include "TP2 UML/Model/prodPerfYCosm.h"
#include "TP2 UML/Model/prodPYC.h"
#include "TP2 UML/Model/Cajero.h"
#include "TP2 UML/Model/prodOrtopedia.h"
#include "TP2 UML/Model/farmacia.h"

using namespace std;

unsigned int asistAutomatico::numero_clientes = 0;

int main() {	

	farmacia miFarmacia("8_a_22", "9_a_19", "Mi_Farmacia", "Sarmiento_1853", "112345678", "Mi_farmacia@mifarmacia.com", 1000000);

	miFarmacia.abrir();

	cliente cliente1(Perfumeria, "juan", "perez", "45296117", false, "2324675707", "juanperez@gmail.com", nullptr, 70.0, efectivo);
	cliente cliente2(PAMI, "paula", "pecker", "45111888", true, "11333695", "pochipecker@gmail.com", nullptr, 700.0, AppPagoCelular);
	cliente cliente3(Ortopedia, "agostina", "nobo", "45862174", false, "55896224", "agosnobo@gmail.com", nullptr, 6340.0, tarjetaDeDebito);

	prodPerfYCosm shampoo(120.0, 10, "1234", "nivea", champu);
	prodOrtopedia cabestrilloA(350.0, 30, "1322", "piesfelices", cabestrillos);

	cliente1.seleccionar_producto(&shampoo);
	cliente1.seleccionar_producto(&shampoo);
	cliente2.seleccionar_producto(&shampoo);
	cliente2.seleccionar_producto(&cabestrilloA);
	cliente3.seleccionar_producto(&cabestrilloA);

	compra* compra1 = cliente1.get_carrito();
	compra* compra2 = cliente2.get_carrito();
	compra* compra3 = cliente3.get_carrito();

	compra1->eliminar_producto(&shampoo);

	queue <cliente> listaClientes;

	listaClientes.push(cliente1);
	listaClientes.push(cliente2);
	listaClientes.push(cliente3);

	cajero cajerocobro("lorenzo", "mazzante", "45296555", "2324684512", 120000);

	double montoCompra;

	unsigned int tamanioCola;
	tamanioCola = listaClientes.size(); //me guardo el tamanio de la cola. nos sale un warning de posible perdida de informacion porque .size 
										//devuelve un size_t pero como solo uso este dato para recorrer el for no habria ningun problema.

	double montoTotal = 0.0;

	cliente2.ver_carrito();

	for (unsigned int i = 0; i < tamanioCola; i++) {

		montoCompra = cajerocobro.cobrar(&listaClientes.front()); //le cobro a los clientes

		montoTotal += montoCompra;

		if (montoCompra != 0.0) {	//chequeo que haya salido todo bien 
			cajerocobro.imprimir_factura(listaClientes.front(), montoCompra); //imprimo las faccturas de los clientes
			miFarmacia.agregar_compra(listaClientes.front().get_carrito());
		}
		listaClientes.pop();

	}

	unsigned int num_total_clientes = asistAutomatico::get_numero();
	
	cout << "La cantidad de clientes atendidos fue: " << num_total_clientes << endl;

	miFarmacia.set_fondos(miFarmacia.get_fondos() + (long int)montoTotal);	//estariamos perdiendo los decimales pero en comparación con el resto de los fondos lo tomamos como despreciable

	miFarmacia.cerrar();

	delete compra1;
	delete compra2;
	delete compra3;

	return 0;

}