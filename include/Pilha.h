#ifndef PILHA_H
#define PILHA_H

#include<Elemento.h>
#include<iostream>

//Pilha estrutura LIFO-Last In First Out, Último a entrar e primeiro a sair;
class Pilha
{
    public:
        Pilha();
        void push(Elemento* e);//Inserir no Topo da pilha;
        void pop();//Remover do topo da pilha;
        Elemento* topo() const;//para a visualizaão do elemnto;

    protected:

    private:
        ListaSimplesmenteEncadeada lista;
};

#endif // PILHA_H
