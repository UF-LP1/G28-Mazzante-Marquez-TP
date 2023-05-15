
#ifndef _ELIMPIEZA_H
#define _ELIMPIEZA_H

#include "empleado.h"
#include "turno.h"

class eLimpieza: public empleado {
public: 
    
/**
 * @param turno
 * @param string
 * @param string
 * @param string
 * @param string
 * @param unsigned int
 */
eLimpieza(string, string, string, string, unsigned int, turno);

~eLimpieza();
    
/**
 * @param turno t
 */
void set_turno(turno t);
    
void mantenimiento_Instalaciones();


private: 
    turno turnoTrabajo;
};

#endif //_ELIMPIEZA_H