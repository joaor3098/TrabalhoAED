#ifndef FILA_H
#define FILA_H

//Fila Estrutura FIFO-First In First Out, primeiro a entra primeiro a sair;
class Fila
{
    public:
        Fila();
        void enfileirar(Elemento* e);
        void desenfileirar();//
        Elemento* Frente()const;//Semelhante a pilha,esse m�todo ira mostrar quem est� a frente da fila;



    protected:

    private:
        ListaSimplesmenteEncadeada lista;
};

#endif // FILA_H
