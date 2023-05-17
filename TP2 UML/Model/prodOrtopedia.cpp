
#include "prodOrtopedia.h"

/**
 * prodOrtopedia implementation
 */

//Método constructor
prodOrtopedia::prodOrtopedia(double precio, unsigned int stock, string codigoProd, string marca, prodOrt tipoProducto)
    : producto (precio, stock, codigoProd, marca) {
    this->tipoProducto = tipoProducto;
}

//Método destructor
prodOrtopedia::~prodOrtopedia() {

}

void prodOrtopedia::imprimir_producto()
{
    cout << "Producto ";
    switch (tipoProducto)
    {
    case vendasElasticas:  cout << "- " << "Vendas elasticas" << endl;
        break;
    case cabestrillos: cout << "- " << "cabestrillos" << endl;
        break;
    case mediasDeCompresion: cout << "- " << "medias de compresion" << endl;
        break;
    default:
        break;
    }
   
}

/**
 * @return prodOrt
 */
prodOrt prodOrtopedia::get_tipoProducto() {
    return this->tipoProducto;
}
