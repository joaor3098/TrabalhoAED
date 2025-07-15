#ifndef PESSOA_H
#define PESSOA_H

#include "Elemento.h"
#include<iostream>

//Pessoa é uma classe derivada de Elemento.
//Pois classe Elemento é abstrata,essa classe derivada vai herdar da classe Elemento.
class Pessoa : public Elemento
{
    public:
        Pessoa(long ID_inicial);//construtor
        void imprimirInfo() const override;//função obrigatória


    protected:

    private:
};

#endif // PESSOA_H
