
#include "prodPerfYCosm.h"

/**
 * prodPerfYCosm implementation
 */

//Método constructor
prodPerfYCosm::prodPerfYCosm(double precio, unsigned int stock, string codigoProd, string marca, prodPYC tipoProd)
    : producto(precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProd;

}

//Método destructor
prodPerfYCosm::~prodPerfYCosm() {

}

/**
 * @return prodPYC
 */
prodPYC prodPerfYCosm::get_tipoProducto() {
    return this->tipoProducto;
}

void prodPerfYCosm::imprimir_producto()
{
	cout << "Producto ";

	switch (tipoProducto)
	{
	case champu:cout << "- " << "shampoo" << endl;
		break;
	case desorante: cout << "- " << "desodorante" << endl;
		break;
	case jabon: cout << "- " << "jabon" << endl;
		break;
	case cremaCuerpo: cout << "- " << "crema cuerpo" << endl;
		break;
	case cremaCara: cout << "- " << "crema cara" << endl;
		break;
	case perfume: cout << "- " << "perfume" << endl;
		break;
	case maquillaje: cout << "- " << "maquillaje" << endl;
		break;
	case esmalteUnia: cout << "- " << "esmalte unia" << endl;
		break;
	default:
		break;
	}
    
}


