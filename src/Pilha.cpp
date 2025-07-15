#include "Pilha.h"

Pilha::Pilha()
{
    //ctor
}

void Pilha::push(Elemento* e){
    lista.InserirNoInicio(e);
}

void Pilha::pop(){
    lista.RemoverPrimeiroElemento();
}

 Elemento* Pilha::topo() const{
    if(cabeca!=nullptr){
            return cabeca->prox;
    }
    else{
        return nullptr;
    }
}
