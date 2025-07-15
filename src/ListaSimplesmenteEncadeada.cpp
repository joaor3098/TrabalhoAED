#include "ListaSimplesmenteEncadeada.h"
#include<iostream>

ListaSimplesmenteEncadeada::ListaSimplesmenteEncadeada(){
    cabeca=nullptr;
}

ListaSimplesmenteEncadeada::No* BuscaID(long ID){
    No* aux=cabeca;
    while(aux != nullptr){
        if(aux->pessoa->getID()==ID){
            return aux;
        }
        aux=aux->proximo;
    }
    return nullptr;
}


void ListaSimplesmenteEncadeada::InserirNoInicio(Elemento* NovaPessoa){
    No* novo = new No(NovaPessoa);
    novo->proximo=cabeca;
    cabeca=novo;
}

void ListaSimplementeEncadeada::InserirNoFim(Elemento* NovaPessoa){
    No* novo= new No(NovaPessoa);
    if(!cabeca){
        cabeca=novo;
        return;
    }
    No* aux=cabeca;
    while(aux->proximo != nullptr){
        aux=aux->proximo;
    }
    aux->proximo=novo;
}

void ListaSimplesmenteEncadeada::RemoverPrimeiroElemento(){
    No* temp=cabeca;
    cabeca=cabeca->proximo;
    delete temp->pessoa;
    delete temp;
}

void ListasSimplesmenteEncadeada::RemoverUltimoElemento(){
    if(!cabeca->proximo){
        delete cabeca->pessoa;
        delete cabeca;
        cabeca=nullptr;
    }
    No* aux=cabeca;
    while(aux->proximo->!=nullptr){
        aux=aux->proximo;
    }
    delete aux->proximo->pessoa;
    delete aux->proximo;
}

ListasSimplesmenteEncadeada::RemoverPorID(long ID){
    if(cabeca->pessoa->getID()==ID){
        RemoverPrimeiroElemento;
        return 1;
    }

    No* aux=cabeca;
    while(aux->proximo && aux->proximo->pessoa->getID() != ID){
        aux=aux->prox;
    }

}

ListaSimplesmenteEncadeada::~ListaSimplesmenteEncadeada(){
    No* aux=cabeca;

    while(aux!=nullptr){
        No* temp =aux;
        aux=aux->proximo;

        delete temp->pessoa;//Libera espaço para elemento;
        delete temp;//Libera o nó;
    }
    cabeca=nullptr;
    //nullptr é uma palavra chave em C++ usada para expressar o ponteiro nulo,é mais seguro de ser usado para evitar ambiguidade;
    //Delete é usada para desalocar memória previamente alocada;
}

Elemento* ListaSimplesmenteEncadeada::getPrimeiroElemento(){
    if(cabeca != nullptr){//Se a lista não estiver vazia, retorna o ponteiro para o ID.
        return cabeca;
    }else{
        return nullptr;//Se lista estiver vazia,retorna vazio.
    }
}

