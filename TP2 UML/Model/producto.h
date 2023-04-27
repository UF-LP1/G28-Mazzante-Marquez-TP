/*
* header file class producto
 */

#include <iostream>
#include <string>

#ifndef _PRODUCTO_H
#define _PRODUCTO_H


using namespace std;

class producto {
public: 
    double precio;
    string codigoProd;
    const string marca;
  
/**
 * @param double
 * @param unsigned int
 * @param string
 * @param string
 */
producto(double, unsigned int, string, string);

~producto();
    
double get_precio();

/**
 * @param double
 */
void set_precio(double);
    
unsigned int get_stock();
    
string get_codigoProd();

protected: 
    unsigned int stock;

};

#endif //_PRODUCTO_H