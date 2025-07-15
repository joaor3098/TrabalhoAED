#ifndef LISTASSEQUENCIAIS_H
#define LISTASSEQUENCIAIS_H

#define TAMANHO 70

#include "Elemento.h"





class ListasSequenciais
{
    public:
        ListasSequenciais();
        void inserirNoInicio(Elemento* novo);
        void inserirNoFim(Elemento* novo);
        void buscaId(long ID);
        void RemoverId(long ID);
        void AlterarID(long ID);

    protected:
        Elemento* lista[TAMANHO];
        int nElementos;

    private:
};

#endif // LISTAS SEQUENCIAIS_H
