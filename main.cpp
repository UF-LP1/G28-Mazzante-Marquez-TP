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

	farmacia miFarmacia("8_a_22", "9_a_19", "Mi_Farmacia", "Sarmiento_1853", "112345678", "Mi_farmacia@mifarmacia.com", 93294110);

	miFarmacia.abrir();

	cliente cliente1(Perfumeria, "juan", "perez", "45296117", false, "2324675707", "juanperez@gmail.com", nullptr);
	cliente cliente2(PAMI, "paula", "pecker", "45111888", true, "11333695", "pochipecker@gmail.com", nullptr);
	cliente cliente3(Ortopedia, "agostina", "nobo", "45862174", false, "55896224", "agosnobo@gmail.com", nullptr);

	prodPerfYCosm shampoo(120.0, 10, "1234", "nivea", champu);
	prodOrtopedia cabestrilloA(350.0, 30, "1322", "piesfelices", cabestrillos);

	compra compra1;
	compra compra2;
	compra compra3;

	cliente1.seleccionar_producto(shampoo);
	cliente2.seleccionar_producto(shampoo);
	cliente2.seleccionar_producto(cabestrilloA);
	cliente3.seleccionar_producto(cabestrilloA);

	queue <cliente> listaClientes;

	listaClientes.push(cliente1);
	listaClientes.push(cliente2);
	listaClientes.push(cliente3);

	cajero cajerocobro("lorenzo", "mazzante", "45296555", "2324684512", 120000);

	double montoCompra;

	unsigned int tamanioCola;
	tamanioCola = listaClientes.size(); //me guardo el tamanio de la cola. nos sale un warning de posible perdida de informacion porque .size 
										//devuelve un size_t pero como solo uso este dato para recorrer el for no habria ningun problema.

	bool descuento=false;



	for (unsigned int i = 0; i < tamanioCola; i++) {

		montoCompra = cajerocobro.cobrar(&listaClientes.front(), descuento); //le cobro a los clientes

		if (montoCompra != 0.0)	//chequeo que haya salido todo bien 
			cajerocobro.imprimir_factura(listaClientes.front(),montoCompra); //imprimo las faccturas de los clientes

		listaClientes.pop();

	}

	unsigned int num_total_clientes = asistAutomatico::get_numero();
	
	cout << "La cantidad de clientes atendidos fue: " << num_total_clientes << endl;

	miFarmacia.cerrar();

	return 0;
}