
#include "cliente.h"
#include "golosina.h"
#include "medicamento.h"
#include "prodOrtopedia.h"
#include "prodPerfYCosm.h"

/**
 * cliente implementation
 */

//Metodo constructor
/**
 * @param necesidad
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param string
 * @param string
 * @param int
 * @param MetDePago
 */
cliente::cliente(necesidad n, string nombre,string apellido,string DNI, bool obraSocial,string telContacto, string mail, compra * co, float billetera, MetDePago metpago) 
    :nombre(nombre), apellido(apellido), DNI(DNI){
    this->TipoNecesidad= n;
    this->obraSocial = obraSocial;
    this->telContacto = telContacto;
    this->mail = mail;
    carrito = co;
    this->num_cliente = ++asistAutomatico::numero_clientes;
    this->billetera = billetera;
    this->metpago = metpago;
}

//Método destructor
cliente::~cliente() {
    carrito = nullptr;
    delete [] this->carrito;
}

/**
 * @return necesidad
 */
necesidad cliente::get_TipoNecesidad() {
    return this->TipoNecesidad;
}

/**
 * @param necesidad n
 * @return void
 */
void cliente::set_TipoNecesidad(necesidad n) {
    this->TipoNecesidad = n;
    return;
}

/**
 * @return bool
 */
bool cliente::get_obraSocial() {
    return this->obraSocial;
}

string cliente::get_nombre()
{
    return this->nombre;
}

string cliente::get_DNI()
{
    return this->DNI;
}

compra* cliente::get_carrito() {
    if (this->carrito == nullptr)
    {
        carrito = new compra();
    }
    return this->carrito;
}

void cliente::ver_carrito() {

    if (this->carrito == nullptr)
        return;

    vector <producto*> carrito_aux = carrito->get_productos();

    producto* ptr_aux = nullptr;

    if (this->get_carrito() != nullptr)
        cout << endl << "-------Carrito de: " << this->get_nombre() << "--------"<< endl;

    for (int i = 0; i < carrito_aux.size(); i++)
    {
        ptr_aux = carrito_aux[i];

        if (dynamic_cast<golosina*>(ptr_aux) != nullptr)
            dynamic_cast<golosina*>(ptr_aux)->imprimir_producto();
        else if (dynamic_cast<prodOrtopedia*>(ptr_aux) != nullptr)
            dynamic_cast<prodOrtopedia*>(ptr_aux)->imprimir_producto();
        else if (dynamic_cast<medicamento*>(ptr_aux) != nullptr)
            dynamic_cast<medicamento*>(ptr_aux)->imprimir_producto();
        else
            dynamic_cast<prodPerfYCosm*>(ptr_aux)->imprimir_producto();
    }
    cout << "-------------------------------" << endl;

    ptr_aux = nullptr;
    delete ptr_aux;       //no sabemos por que pero nos tira error aca.

    return;

}




/**
 * @param cajero c
 * @return void
 */
void cliente::recibir_factura() {
    return;
}

/**
 * @param cajero c
 * @return void
 */
void cliente::recibir_bolsaYCompra() {
    return;
}

/**
 * @return void
 */
void cliente::pagar(float nuevabilletera) {
    
    this->billetera = nuevabilletera;

    return;
}

/**
 * @param producto c
 * @return void
 */
void cliente::seleccionar_producto(producto *c) {
    if (carrito == nullptr) {
        carrito = new compra();
    }
    carrito->agregar_producto(c);
}


MetDePago cliente::get_pago()
{
    return this->metpago;
}

float cliente::get_billetera()
{
    return this->billetera;
}



