/**
 * Project Untitled
 */


#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "compra.h"
using namespace std;

class farmacia {
public: 
    string horarioSemana;
    string horarioFinDeSemana;
    const string nombre;
    string direccion;
    string telContacto;
    string mail;
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned long int
 */
farmacia(string, string, string, string, string, string, unsigned long int);
    
~farmacia();

void abrir();
    
void cerrar();
    
long int get_fondos();
    
/**
 * @param long int f
 */
void set_fondos(long int f);
    
/**
 * @param string h
 */
void set_horarioSemana(string h);
    
void adquirirFondos();
    
/**
 * @param compra co
 */
void agregar_compra(compra co);

private: 
    unsigned long int fondos;
};

#endif //_FARMACIA_H