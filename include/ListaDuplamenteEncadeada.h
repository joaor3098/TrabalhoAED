#ifndef LISTADUPLAMENTEENCADEADA_H
#define LISTADUPLAMENTEENCADEADA_H

#include "Elemento.h"
#include<iostream>

class ListaDuplamenteEncadeada
{
    public:
        ListaDuplamenteEncadeada();//Construtor da lista duplamente encadeada

        ~ListaDuplamenteEncadeada();//Destrutor da lista duplamente encadeada;

        void InserirNoInicio(Elemento* NovaPessoa);
        void InserirNoFim(Elemento* NovaPessoa);
        void RemoverPrimeiroElemento();
        void InserirUltimoElemento();
        void RemoverPorID(long ID);

        struct No* BuscaID(long ID);

    protected:

    private:
        typedef struct no{
            no* proximo;//Aponta para o próximo elemento;
            no* anterior;//Aponta para o elemento anterior;
            no*(Elemento* p):pessoa(p),proximo(nullptr),anterior(nullptr){}
        }No;

        No* cabeca;
};

#endif // LISTADUPLAMENTEENCADEADA_H
