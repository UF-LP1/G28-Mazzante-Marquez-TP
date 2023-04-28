/*
* header file class asistAutomatico
 */

#ifndef _ASISTAUTOMATICO_H
#define _ASISTAUTOMATICO_H


class asistAutomatico {
public: 
    unsigned int numero;

/**
 * @param unsigned int
 */
asistAutomatico(unsigned int);

~asistAutomatico();

int generar_numero();
    
/**
 * @param int
 */
void set_numero(int);
    
int get_numero();

};

#endif //_ASISTAUTOMATICO_H