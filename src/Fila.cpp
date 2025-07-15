#include "Fila.h"

Fila::Fila()
{
    //ctor
}

Fila::enfileirar(Elemento* e){
    lista.InserirNoFim(e);
}

Fila::desenfileirar(){
    lista.RemoverPrimeiroElemento();
}

Elemento* Fila::Frente()const{
    if(cabeca!=nullptr){
            return cabeca->prox;
    }
    else{
        return nullptr;
    }
}
