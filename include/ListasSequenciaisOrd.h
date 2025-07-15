#ifndef LISTASSEQUENCIAISORD_H
#define LISTASSEQUENCIAISORD_H

#define TAMANHO 70

#include "Elemento.h"



class ListasSequenciaisOrd
{
    public:
        ListasSequenciaisOrd();
        void InserirIdOrd(Elemento* novo);
        int BuscaBinId(long ID);
        void RemoverIdOrd(Elemento* novo);
        void AlterarIdOrd(long ID);

    protected:
        Elemento* lista[TAMANHO];
        int nElementos;

    private:
};

#endif // LISTASSEQUENCIAISORD_H
