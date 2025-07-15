#include "Elemento.h"
#include<iostream>

using namespace std;

Elemento::Elemento(long ID_inicial):ID(ID_inicial){}

void Elemento::inserirNoInicio(){
        cout<<"Inserir no inicio"<<endl;
}
void Elemento::inserirNoFim(){
        cout<<"Inserir no fim"<<endl;
}
void Elemento::buscar(){
        cout<<"Buscar elemento"<<endl;
}
void Elemento::remover(){
        cout<<"remover elemento"<<endl;
}
void Elemento::alterar(){
        cout<<"alterar elemento"<<endl;
}

long Elemento::getID() const{
       return ID;
}

