#include "ArvoreB.h"
#include<iostream>

using namespace std;

ArvoreB::ArvoreB()
{
    raiz=nullptr;
}

Elemento* ArvoreB::BuscarPeloId(long ID) {
    No* aux = raiz;
    while (aux) {
        if (ID == aux->pessoa->getID()){
            return aux->pessoa;}
        if (ID < aux->pessoa->getID()){
            aux = aux->esquerda;}
        else{
            aux = aux->direita;}
    }
    return nullptr;
}

void ArvoreB::inserir(Elemento* NovaPessoa){
    No** aux = &raiz;
    while (*aux) {
        if (NovaPessoa->getID() < (*aux)->pessoa->getID()) {
            aux= &((*aux)->esquerda);}
             else{
                  aux = &((*aux)->direita);}
    }
    *aux = new No(NovaPessoa);
}

void ArvoreB::RemoverID(long ID){

}

void ArvoreB::EmOrdem(No* raiz){
    if(raiz!=nullptr){
        EmOrdem(raiz->esquerda);
        cout << raiz->pessoa->getID() << " ";
        EmOrdem(raiz->direita);
    }
}

void ArvoreB::PreOrdem(No* raiz){
    if(raiz!=nullptr){
        cout << raiz->pessoa->getID() << " ";
        PreOrdem(raiz->esquerda);
        PreOrdem(raiz->direita);
    }
}

void ArvoreB::PosOrdem(No* raiz){
    if(raiz!=nullptr){
        PosOrdem(raiz->esquerda);
        PosOrdem(raiz->direita);
        cout << raiz->pessoa->getID() << " ";
    }
}
