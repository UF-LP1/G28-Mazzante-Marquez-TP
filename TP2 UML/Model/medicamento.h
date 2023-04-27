/**
 * Project Untitled
 */


#ifndef _MEDICAMENTO_H
#define _MEDICAMENTO_H

#include "producto.h"
#include <string>
#include <ctime>

using namespace::std;

class medicamento : public producto {
public:
    const string nombre;
    time_t vencimiento;

    /**
     * @param string
     * @param time_t
     */
    medicamento(double, unsigned int, string, string, string, time_t);
    ~medicamento();

    time_t get_vencimiento();
};

#endif //_MEDICAMENTO_H