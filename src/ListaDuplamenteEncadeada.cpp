#include "ListaDuplamenteEncadeada.h"

ListaDuplamenteEncadeada::ListaDuplamenteEncadeada(){
    cabeca=nullptr;
}

ListaDuplamenteEncadeada::~ListaDuplammenteEncadeada{
    No* aux=cabeca;
    while(aux != nullptr){
        No*temp=aux;
        aux=aux->prox;
        delete temp->pessoa;
        delete temp;
    }
    cabeca = nullptr;
}

void ListaDuplamenteEncadeada::InserirNoInicio(Elemento* NovaPessoa){
    No* novo= new No(NovaPessoa);
    novo->proximo=cabeca;
    if(cabeca != nullptr){
        cabeca->anterior=novo;
    }
    cabeca=novo;
    cout<<"Elemento inserido na primeira posi��o"<<endl;
}

void ListaDuplamenteEncadeada::InserirNoFim(Elemento* NovaPessoa){
    No* novo= new No(NovaPessoa);
    if(cabeca==nullptr){
        cabeca=novo;
        cout<<"Inser��o na �ltima posi��o realizada"<<endl;
        return 1;
    }
    No* aux=cabeca;
    while(aux->proximo!=nullptr){
        aux=aux->proximo;
    }

    aux->prox=novo;
    novo->anterior=aux;
    cout<<"Inser��o na �tltima posi��o realizada"<<endl;
}

void ListaDuplamenteEncadeada::RemoverPrimeiroElemento(){
    if(cabeca==nullptr){
        cout<<"Lista est� vazia"<<endl;
        return 1;
    }
    No* aux=cabeca;
    cabeca=cabeca->prox;
    if(cabeca != nullptr){
        cabeca->anterior=nullptr;
    }
    delete aux->pessoa;
    delete aux;
    cout<<"Primeiro elemento removido"<<endl;
}

void ListaDuplamenteEncadeada::RemoverUltimoElemento(){
    if(cabeca==nullptr){
        cout<<"Lista est� vazia"<<endl;
        return 1;
    }

    No* aux=cabeca;
    while(aux->prox != nullptr){
        aux=aux->prox;
    }
    if(aux->anterior!=nullptr){
        aux->anterior->proximo=nullptr;
    }
    else{
        cabeca=nullptr;
    }

    delete aux=pessoa;
    delete aux;
    cout<<"�ltimo elemento removido"<<endl;
}

void ListaDuplamenteEncadeada::RemoverPorID(long ID){
    No* aux=cabeca;
    while(aux!=nullptr && aux->pessoa->getID()->ID){
        aux=aux->prox;
    }
    if(aux==nullptr){
        cout<<"ID n�o foi encontrado"<<endl;
        return 1;}
    if(aux->anterior != nullptr){
        aux->anterior->proximo=aux->prox;
    }else{
        cabeca=aux->prox;
    }

    if(aux->prox!=nullptr){
        aux->proximo->anterior=aux->anterior;
    }

    delete aux->pessoa;
    delete aux;
    cout<<"ID removido"<<endl;
}

ListaDuplamenteEncadeada::No*ListaDuplamenteEncadeada::BuscaID(long ID){
    No* aux=cabeca;
    while(aux != nullptr){
        if(aux->pessoa->getID()==ID){
            return aux;
        }
        aux=aux->proximo;
    }
    return nullptr;
}

