#ifndef ARVOREB_H
#define ARVOREB_H

#include "Elemento.h"
#include<iostream>


class ArvoreB
{
    public:
        ArvoreB();
        ~ArvoreB();//Destrutor
        void inserir(Elemento* NovaPessoa);
        Elemento* BuscaID(long ID);
        void RemoverID(long ID);

        void EmOrdem(No* aux) const;
        void preOrdem(No* aux) const;
        void PosOrdem(No* aux) const;

    protected:

    private:
        typedef struct no{
            Elemento* pessoa;
            no* direita;// filho direita
            no* esquerda;//filho esquerda
            no* (Elemento* p):pessoa(p),direita(nullptr),esquerda(nullptr){};
        }No;

};

#endif // ARVOREB_H
