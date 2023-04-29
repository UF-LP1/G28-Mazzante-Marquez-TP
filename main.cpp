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

using namespace std;

int main() {	
	cliente cliente1(Perfumeria, "juan", "perez", "45296117", false, "2324675707", "juanperez@gmail.com", 13, nullptr);
	cliente cliente2(PAMI, "paula", "pecker", "45111888", true, "11333695", "pochipecker@gmail.com", 14, nullptr);
	cliente cliente3(Ortopedia, "agostina", "nobo", "45862174", false, "55896224", "agosnobo@gmail.com", 15, nullptr);

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
	tamanioCola = listaClientes.size();

	for (int i = 0; i < tamanioCola; i++) {

		montoCompra = cajerocobro.cobrar(&listaClientes.front());

		if (montoCompra != 0.0)	//chequeo que haya salido todo bien 
			cajerocobro.imprimir_factura(listaClientes.front(),montoCompra);

		listaClientes.pop();

	}

	

	return 0;
}