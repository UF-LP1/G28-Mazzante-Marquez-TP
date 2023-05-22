
#ifndef _MEDICAMENTO_H
#define _MEDICAMENTO_H

#include "producto.h"

class medicamento : public producto {
public:
    const string nombre;
    string vencimiento;

    /**
     * @param string
     * @param time_t
     */
    medicamento(double, unsigned int, string, string, string, string);
    ~medicamento();

    string get_vencimiento();

    void imprimir_producto();
};

#endif //_MEDICAMENTO_H