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
#include "TP2 UML/Model/golosina.h"
#include "TP2 UML/Model/medicamento.h"

using namespace std;

unsigned int asistAutomatico::numero_clientes = 0;

void actualizar_stock(compra * Comprita_Aux);

int main()
{

	farmacia miFarmacia("8_a_22", "9_a_19", "Mi_Farmacia", "Sarmiento_1853", "112345678", "Mi_farmacia@mifarmacia.com", 1000000);

	miFarmacia.abrir();

	cliente cliente1(Perfumeria, "juan", "perez", "45296117", false, "2324675707", "juanperez@gmail.com", nullptr, 7000.0, efectivo);
	cliente cliente2(PAMI, "paula", "pecker", "45111888", true, "11333695", "pochipecker@gmail.com", nullptr, 700.0, AppPagoCelular);
	cliente cliente3(Ortopedia, "agostina", "nobo", "45862174", false, "55896224", "agosnobo@gmail.com", nullptr, 6340.0, tarjetaDeDebito);
	cliente cliente4(farmaciaParticular, "carlos", "garcia", "32897665", true, "11786443", "charlygarcia@gmail.com", nullptr, 124528.0, tarjetadecredito);
	
	prodPerfYCosm Shampoo(120.0, 10, "1234", "nivea", champu);
	prodPerfYCosm Desodorante(450.0, 14, "1235", "axe", desorante);
	prodPerfYCosm Jabon(260.0, 34, "1236", "dove", jabon);
	prodPerfYCosm Cremacuerpo(410.0, 13, "1237", "dove", cremaCuerpo);
	prodPerfYCosm Cremacara(310.0, 13, "1238", "dove", cremaCara);
	prodPerfYCosm Perfume(1005, 30, "1239", "paco", perfume);
	prodPerfYCosm Maquillaje(980.0, 13, "1240", "mac", maquillaje);
	prodPerfYCosm EsmalteUnia(780.0, 10, "1241", "mac", esmalteUnia);
	prodOrtopedia CabestrilloA(350.0, 30, "1322", "piesfelices", cabestrillos);
	prodOrtopedia VendasElasticas(1500.0, 15, "4502", "sanasana", vendasElasticas);
	prodOrtopedia MediasDeCompresion(2600.0, 23, "1987", "piesAjustados", mediasDeCompresion);
	golosina Chupetin(60.0, 120, "1313", "arcor", 13 / 12 / 2023, "chupaleta");
	golosina Bonobon(75.0, 50, "1214", "arcor", 1192023, "bonobon");
	golosina Cofler(450.0, 12, "3333", "arcor", 3112023, "chocolate");
	medicamento Ibupirac(500.0, 50, "4444", "ibupirac", "ibuprofeno", 15 / 9 / 2025);
	medicamento Actron(400.0, 60, "5484", "actron", "actron", 3182024);
	medicamento Paracetamol(320.0, 40, "8888", "paracetamol", "paracetamol", 5112025);

	Ibupirac.set_precio(650.0); //pruebo el metodo cambiar precio

	vector <cliente*> lista_cliente{ &cliente1, &cliente2, &cliente3, &cliente4 };
	

	cout << "-------------PRODUCTOS DISPONIBLES-----------------" << endl << endl;

	cout << "1 - "; Shampoo.imprimir_producto();
	cout << "2 - "; Desodorante.imprimir_producto();
	cout << "3 - "; Jabon.imprimir_producto();
	cout << "4- "; Cremacara.imprimir_producto();
	cout << "5 - "; Perfume.imprimir_producto();
	cout << "6 - "; Maquillaje.imprimir_producto();
	cout << "7 - "; EsmalteUnia.imprimir_producto();
	cout << "8 - "; CabestrilloA.imprimir_producto();
	cout << "9 - "; VendasElasticas.imprimir_producto();
	cout << "10 - "; MediasDeCompresion.imprimir_producto();
	cout << "11 - "; Chupetin.imprimir_producto();
	cout << "12 - "; Bonobon.imprimir_producto();
	cout << "13 - "; Cofler.imprimir_producto();
	cout << "14 - "; Ibupirac.imprimir_producto();
	cout << "15 - "; Actron.imprimir_producto();
	cout << "16 - "; Paracetamol.imprimir_producto();
	

	for (int i = 0; i < lista_cliente.size(); i++) 
	{
	cout << endl << "CLIENTE" << i + 1 << endl;
	cout << "Ingrese el numero del producto que se quiere llevar o 0 para salir: " << endl;
	int numeroAux= 300;
	
		while (numeroAux != 0) 
		{
			cin >> numeroAux;
			switch (numeroAux)
			{
			case 0: cout << "ya elegi mis productos!" << endl; break;
			case 1: lista_cliente[i]->seleccionar_producto(&Shampoo);
				break;
			case 2: lista_cliente[i]->seleccionar_producto(&Desodorante);
				break;
			case 3: lista_cliente[i]->seleccionar_producto(&Jabon);
				break;
			case 4: lista_cliente[i]->seleccionar_producto(&Cremacara);
				break;
			case 5: lista_cliente[i]->seleccionar_producto(&Perfume);
				break;
			case 6: lista_cliente[i]->seleccionar_producto(&Maquillaje);
				break;
			case 7: lista_cliente[i]->seleccionar_producto(&EsmalteUnia);
				break;
			case 8: lista_cliente[i]->seleccionar_producto(&CabestrilloA);
				break;
			case 9: lista_cliente[i]->seleccionar_producto(&VendasElasticas);
				break;
			case 10: lista_cliente[i]->seleccionar_producto(&MediasDeCompresion);
				break;
			case 11: lista_cliente[i]->seleccionar_producto(&Chupetin);
				break;
			case 12: lista_cliente[i]->seleccionar_producto(&Bonobon);
				break;
			case 13: lista_cliente[i]->seleccionar_producto(&Cofler);
				break;
			case 14: lista_cliente[i]->seleccionar_producto(&Ibupirac);
				break;
			case 15: lista_cliente[i]->seleccionar_producto(&Actron);
				break;
			case 16: lista_cliente[i]->seleccionar_producto(&Paracetamol);
				break;
			default:
				cout << "El producto no existe elija otro: ";
			}
		}

	}
	
	compra* compra1 = lista_cliente[0]->get_carrito();
	compra* compra2 = lista_cliente[1]->get_carrito();
	compra* compra3 = lista_cliente[2]->get_carrito();
	compra* compra4 = lista_cliente[3]->get_carrito();


	compra1->eliminar_producto(&Shampoo);

	queue <cliente> listaClientes;

	listaClientes.push(*lista_cliente[0]);
	listaClientes.push(*lista_cliente[1]);
	listaClientes.push(*lista_cliente[2]);
	listaClientes.push(*lista_cliente[3]);

	cajero cajerocobro("lorenzo", "mazzante", "45296555", "2324684512", 120000);

	double montoCompra;

	unsigned int tamanioCola;
	tamanioCola = listaClientes.size(); //me guardo el tamanio de la cola. nos sale un warning de posible perdida de informacion porque .size 
										//devuelve un size_t pero como solo uso este dato para recorrer el for no habria ningun problema.

	double montoTotal = 0.0;

	cliente1.ver_carrito();	//prubo el metodo ver carrito



	compra* comprita_Aux = nullptr;

	for (unsigned int i = 0; i < tamanioCola; i++) {

		montoCompra = cajerocobro.cobrar(&listaClientes.front()); //le cobro a los clientes

		montoTotal += montoCompra;

		if (montoCompra != 0.0) {	//chequeo que haya salido todo bien 
			cajerocobro.imprimir_factura(listaClientes.front(), montoCompra); //imprimo las faccturas de los clientes
			miFarmacia.agregar_compra(listaClientes.front().get_carrito());
		}
		else //si el monto es 0 debo agregar los articulos que se iba a llevar el cliente 
		{
			comprita_Aux = listaClientes.front().get_carrito();
			actualizar_stock(comprita_Aux);		//actualizo el stock de los productos que se llevaron
		}

		listaClientes.pop();

	}
	comprita_Aux = nullptr;
	delete comprita_Aux;

	unsigned int num_total_clientes = asistAutomatico::get_numero();
	
	cout << "La cantidad de clientes atendidos fue: " << num_total_clientes << endl << endl;

	miFarmacia.set_fondos(miFarmacia.get_fondos() + (long int)montoTotal);	//estariamos perdiendo los decimales pero en comparación con el resto de los fondos lo tomamos como despreciable

	miFarmacia.cerrar();

	delete compra1;
	delete compra2;
	delete compra3;
	delete compra4;

	return 0;

}



void actualizar_stock(compra * Comprita_Aux) {

	vector<producto*> listaProdAActualizar = Comprita_Aux->get_productos();

	for (int i = 0; i < listaProdAActualizar.size(); i++)
	{
		listaProdAActualizar[i]->set_stock(listaProdAActualizar[i]->get_stock() + 1);
	}

}
