#include <queue>
#include <string>
#include <iostream>
#include "TP2 UML/Model/cliente.h"
#include "TP2 UML/Model/empleado.h"
#include "TP2 UML/Model/necesidad.h"
#include "TP2 UML/Model/prodPerfYCosm.h"
#include "TP2 UML/Model/prodPYC.h"
#include "TP2 UML/Model/Cajero.h"

using namespace std;

int main() {	
	cliente cliente1(PAMI, "juan", "perez", "45296117", false, "2324675707", "juanperez@gmail.com", 13, nullptr);

	prodPerfYCosm shampoo(120.0, 10, "1234", "nivea", champu);

	compra compra1;

	compra1.~compra();

	cliente1.seleccionar_producto(shampoo);

	queue <cliente> listaClientes;

	listaClientes.push(cliente1);

	cajero cajerocobro("lorenzo", "mazzante", "45296555", "2324684512", 120000);

	double montoCompra;

	montoCompra = cajerocobro.cobrar(&listaClientes.front());

	if (montoCompra != 0.0)	//chequeo que haya salido todo bien 
		cajerocobro.imprimir_factura(listaClientes.front(),montoCompra);

	return 0;
}