#include<iostream>
#include<list>

using namespace std;

#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H

template<typename T>  
struct node
  {
    node *next;
    T data;
  };

template<typename T> 
class llist {
    private:
    node<T> *head, *tail;
    public:
    llist()
    {
      head=NULL;
      tail=NULL;
    }
    void insert (T item) {
        //se crea un nodo temporal (un puntero)
            node<T> *temp=new node<T>;
            //le pones al data (valor) del nuevo puntero el valor del item ingresado
            //y le asignas esa data al temporal
            temp->data=item;
            //le asignas de puntero la cabeza actual
            temp->next=head;
            //la nueva cabeza es el temporal que se creo aca
            head=temp;
    }
    template<typename... Args>
    void insert(T item, Args... args){
        insert(item, args...);
    }

    T get_max(){
        //recorre toda la lista
        while(head != NULL) {
            //creo una variable max (el val maximo)
            T max;
            //si el maximo actual es menor a la cabeza actual
            if (max < head->data){
                //le asigno el data de la cabeza al max
                max == head->data;
                //pero si no lo es
            } else {
                //apunto al siguiente nodo y se repite el loop 
                head = head->next;
            }
        }
        return max;
    } 

    void display(){
    node<T> *temp=new node<T>;
    temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
    void clear(){
        node<T> *temp=new node<T>;
        temp = head;    
        head-> next = NULL;
    }
};
template<typename T>
ostream& operator<<(ostream& out, const llist<T>& list ){
        list.display();
    }
template<typename T>
istream& operator>>(istream& in, const llist<T>& list){
        list.insert(in);
}

#endif