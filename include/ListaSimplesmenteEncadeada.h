#ifndef LISTASIMPLESMENTEENCADEADA_H
#define LISTASIMPLESMENTEENCADEADA_H

#include<elemento.h>


class ListaSimplesmenteEncadeada
{
    public:
        ListaSimplesmenteEncadeada();
        ~ListaSimplesmenteEncadeada();//Destrutor da lista lista simplesmente encadeada;

        void InserirNoInicio(Elemento* NovaPessoa);
        void InserirNoFim(Elemento* NovaPessoa);
        void RemoverPrimeiroElemento();
        void InserirUltimoElemento();
        void RemoverPorID(long ID);
        Elemento* getPrimeiroElemento()const;//Será utilizado para ver o topo da pilha,

        struct No* BuscaID(long ID);

    protected:


    private:
        typedef struct no{
            elemento* pessoa;
            no* proximo;//Aponta para o próximo elemento;
            no*(Elemento* p):pessoa(p),proximo(nullptr){}
        }No;

        No* cabeca;//Simboliza o inicio da lista;
};

#endif // LISTASIMPLESMENTEENCADEADA_H
