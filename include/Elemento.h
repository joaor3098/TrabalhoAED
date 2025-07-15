#ifndef ELEMENTO_H
#define ELEMENTO_H


class Elemento
{
    public:
        Elemento(long ID_inicial);


        virtual void imprimirInfo() const = 0;

        long getID() const;


    protected:
         long ID;

    private:
};

#endif // ELEMENTO_H
