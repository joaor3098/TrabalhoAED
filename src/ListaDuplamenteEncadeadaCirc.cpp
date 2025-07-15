#include "ListaDuplamenteEncadeadaCirc.h"
#include<iostream>

ListaDuplamenteEncadeadaCirc::ListaDuplamenteEncadeadaCirc(){
    cabeca=nullptr;
}

ListaDuplamenteEncadeadaCirc::~ListaDuplamenteEncadeadaCirc(){
    No* aux=cabeca;
    do{
        No* temp=aux;
        aux=aux->proximo;
        delete temp->pessoa;
        delete temp;
    }while(aux!=nullptr);

    cabeca=nullptr;
}

void ListaDuplamenteEncadeadaCirc::InserirNoInicio(Elemento* NovaPessoa){
    No* novo=new No(NovaPessoa);
    if(!=cabeca){
        novo->proximo=novo;
        novo->anterior=novo;
        cabeca=novo;
    }else{
        No* Ultimo=cabeca->anterior;
        novo->proximo=cabeca;
        novo->anterior=Ultimo;
        cabeca->anterior=novo;
        cabeca->proximo=novo;
        cabeca=novo;
    }
    cout<<"Elemento inserido na primeira posição"<<endl;
}

void ListaDuplamenteEncadeadaCirc::InserirNoFim(Elemento* NovaPessoa){
    No* novo=new No(NovaPessoa);
    if(!cabeca){
        novo->proximo=novo;
        novo->anterior=novo;
        cabeca=novo;
    }else{
        No* Ultimo=cabeca->anterior;
        novo->proximo=cabeca;
        novo->anterior=Ultimo;
        Ultimo->proximo=novo;
        cabeca->anterior=novo;
    }
    cout<<"Elemento inserido na ultima posição"<<endl;
}

void ListaDuplamenteEncadeadaCirc::RemoverPrimeiroElemento(){
    if (cabeca->proximo == cabeca) {
        delete cabeca->pessoa;
        delete cabeca;
        cabeca = nullptr;
    } else {
        No* ultimo = cabeca->anterior;
        No* temp = cabeca;
        cabeca = cabeca->proximo;
        ultimo->proximo = cabeca;
        cabeca->anterior = ultimo;
        delete temp->pessoa;
        delete temp;
    }
    cout << "Primeiro elemento removido." << endl;
}

void ListaDuplamenteEncadeadaCirc::RemoverUltimoElemento(){
    if (!cabeca) {
        cout << "Lista vazia." << endl;
        return;
    }

    if (cabeca->proximo == cabeca) {
        delete cabeca->pessoa;
        delete cabeca;
        cabeca = nullptr;
    } else {
        No* ultimo = cabeca->anterior;
        No* penultimo = ultimo->anterior;
        penultimo->proximo = cabeca;
        cabeca->anterior = penultimo;
        delete ultimo->pessoa;
        delete ultimo;
    }
    cout << "Último elemento removido." << endl;
}

void ListaDuplamenteEncadeadaCirc::RemoverPorID(long ID){
    if (!cabeca) {
        cout << "Lista vazia." << endl;
        return;
    }

    No* aux = cabeca;
    do {
        if (aux->pessoa->getID() == ID) {
            if (aux == cabeca && aux->proximo == cabeca) {
                delete aux->pessoa;
                delete aux;
                cabeca = nullptr;
            } else {
                No* anterior = aux->anterior;
                No* proximo = aux->proximo;
                anterior->proximo = proximo;
                proximo->anterior = anterior;
                if (aux == cabeca) cabeca = proximo;
                delete aux->pessoa;
                delete aux;
            }
            cout << "ID removido" << endl;
            return;
        }
        aux = aux->proximo;
    } while (aux != cabeca);

    cout << "ID nao encontrado." << endl;
}

ListaDuplamenteEncadeadaCirc::No* ListaDuplamenteEncadeadaCirc::BuscaID(long ID){
    if (!cabeca) return nullptr;

    No* aux = cabeca;
    do {
        if (aux->pessoa->getID() == ID) {
            return aux;
        }
        aux = aux->proximo;
    } while (aux != cabeca);

    return nullptr;
}

