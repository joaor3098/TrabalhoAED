#include "ListasSequenciaisOrd.h"
#include<iostream>

using namespace std;

ListasSequenciaisOrd::ListasSequenciaisOrd(){
    nElementos=0;
}

void ListasSequenciaisOrd::InserirIdOrd(Elemento* novo){
    if(nElementos<TAMANHO){
        int i=nElementos-1;
        while(i>=0 && lista[i]->getID()>novo->getID()){
            lista[i+1]=lista[i];
            i--;
        }
        lista[i+1]=novo;
        nElementos++;
        cout<<"Elemento inseridos"<<endl;
    }
    else{
        cout<<"Elemento não pode ser inserido,Lista cheia"<<endl;
    }

}

int ListasSequenciaisOrd::BuscaBinId(long ID){
    int esquerda=0;
    int direita=nElementos-1;
    while(esquerda<=direita){
        int meio=(direita+esquerda)/2;
        if(lista[meio]->getID()==ID){
            return meio;}
        else if(lista[meio]->getID()<ID){
            esquerda=meio+1;
        }
        else{
            direita=meio-1;
        }
    }
    return -1;//Quando ID não for encontrado
}
void ListasSequenciaisOrd::RemoverIdOrd(long ID){
    int posicao=BuscaBinId(ID);
    if(posicao == -1){
        cout<<"ID não foi encontrado"<<endl;
    }
    delete lista[posicao];

    for(int i=0;i<nElementos-1;i++){
        lista[i]=lista[i+1];}
    nElementos--;
    cout<<"Remoção Realizada"<<endl;
}
void ListasSequenciaisOrd::AlterarIdOrd(long ID){
    int posicao=BuscaBinId(ID);
    if(posicao == -1){
        cout<<"ID não foi encontrado"<<endl;
    }
    delete lista[posicao];

    for(int i=0;i<nElementos-1;i++){
        lista[i]=lista[i+1];
    }
    nElementos--;
    cout<<"Elemento removido"<<endl;

    long novoID;
     cout <<"Digite novo ID"<<endl;
     cin >> novoID;

    Pessoa* novaPessoa = new Pessoa(novoID);

    InserirIdOrd(novaPessoa);
}


