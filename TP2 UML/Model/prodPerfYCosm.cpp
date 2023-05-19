
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
	case champu:cout << "- " << "shampoo" << ", $" << this->precio << endl;
		break;
	case desorante: cout << "- " << "desodorante" << ", $" << this->precio << endl;
		break;
	case jabon: cout << "- " << "jabon" << ", $" << this->precio << endl;
		break;
	case cremaCuerpo: cout << "- " << "crema cuerpo" << ", $" << this->precio << endl;
		break;
	case cremaCara: cout << "- " << "crema cara" << ", $" << this->precio << endl;
		break;
	case perfume: cout << "- " << "perfume" << ", $" << this->precio << endl;
		break;
	case maquillaje: cout << "- " << "maquillaje" << ", $" << this->precio << endl;
		break;
	case esmalteUnia: cout << "- " << "esmalte unia" << ", $" << this->precio << endl;
		break;
	default:
		break;
	}
    
}


