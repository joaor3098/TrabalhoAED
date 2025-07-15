#include<iostream>
#include "Pessoa.h"
#include "ListasSequenciais.h"
#include "ListasSequenciaisOrd.h
#include "ListaSimplesmenteEncadeada.h"
#include "ListaDuplamenteEncadeada.h"
#include "ListaDuplamenteEncadeadaCirc.h"
#include "ArvoreB.h"
#include "Pilha.h"
#include "Fila.h"

using namespace std;

int main(void){
    Pessoa* pessoaA=new Pessoa(7);
    Pessoa* pessoaB=new Pessoa(8);
    Pessoa* pessoaC=new Pessoa(10);

    //Listas Sequenciais
    ListasSequenciais sequencias;
    sequencias.inserirNoInicio(pessoaA);
    sequencias.inserirNoFim(pessoaB);
    sequencias.buscaId(7);
    sequencias.AlterarID(10);
    sequencias.RemoverId(8);

    //Listas Sequenciais Ordenadas
    ListasSequenciaisOrd ordseq;
    ordseq.inserirNoInicio(pessoaB);
    ordseq.inserirNoFim(pessoaA);
    ordseq.buscaId(10);
    ordseq.AlterarId(8);
    ordseq.RemoverId(8);

    //Listas Simplesmente Encadeadas
    ListaSimplementeEncadeada simp;
    simp.InserirNoIncio(pessoaB);
    simp.InserirNoFim(pessoaA);
    simp.RemoverPorID(7);

    //Listas Duplamente encadeadas
    ListaDuplamenteEncadeada dupla;
    dupla.InserirNoInicio(pessoaC);
    dupla.InserirNoFim(pessoaB);
    dupla.RemoverPorID(10);

    //Listas Duplamente Circulares
    ListaDuplamenteEncadeadaCirc circ;
    circ.InserirNoInicio(pessoaB)
    circ.InserirNoFim(pessoaC)
    circ.RemoverPorID(8);

    //Árvore Busca Binária
    ArvoreB bb;
    bb.inserir(pessoaA);
    bb.inserir(pessoaB);
    bb.inserir(pessoaC);

    //Pilha
    Pilha pilha;
    pilha.push(new Pessoa(9));

    //Fila
    Fila fila;
    fila.enfileira(new Pessoa(10));





return 0;
}
