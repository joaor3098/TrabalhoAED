#include "ListasSequenciais.h"
#include<iostream>

ListasSequenciais::ListasSequenciais(){
    nElementos=0;
}

void ListasSequenciais::inserirNoInicio(Elemento* novo){
    if(nElementos<TAMANHO){
        for(int i=nElementos;i>0;i--){
            lista[i]=lista[i-1];
        }
        lista[0]=novo;
        nElementos++;
        cout<<"Elemento inserido no início"<<endl;
    }
    else{
        cout<<"Não foi possível inserir,lista cheia"<<endl;
    }
}
void ListasSequenciais::inserirNoFim(Elemento* novo){
    if(nElementos<TAMANHO){
        lista[nElementos]=novo;
        nElementos++;
        cout<<"Elemento inserido no início"<<endl;
        }
    else{
        cout<<"Não foi possível inserir,lista cheia"<<endl;
    }
}
void ListasSequenciais::buscaId(long ID){
    for(int i=0;i<nElementos;i++){
        if(lista[i]->getID()==ID){
            cout<<"Elemento encontrado"<<endl;
            lista[i]->imprimirInfo();
            return;
        }
    }

}
void ListasSequenciais::RemoverId(long ID){
    for(int i=0;i<nElementos;i++){
        if(lista[i]->getID()==ID){
            delete lista[i];
            for(int j=i;j<nElementos-1;j++){
                lista[j]=lista[j+1];
            }
            nElementos--;
            cout<<"elemento removido"<<endl;
            return;
        }
    }
}
void ListasSequenciais::AlterarID(long ID){
    for(int i=0;i<nElementos;i++){
            if(lista[i]->getID()==ID){
                cout<<"Elemento encontrado"<<endl;
            delete lista[i];
            long IDnovo;
            cout<<"Insira o novo ID"<<endl;
            cin>>IDnovo;
            lista[i]= new Pessoa(IDnovo);
            cout<<"ID alterado com sucesso"<<endl;
            return;}
    }

}

