//arbol avl en c++

#include <iostream>
using namespace std;

class AVL;

class Nodo {
public:
Nodo (const int dat, Nodo *pad=NUL, Nodo *izq=NUL, Nodo *der=NULL):
dato(dat), padre(pad), izquierdo(izq), derecho(der), FE(0){}
int dato;
int FE;
Nodo *izquierdo;
Nodo *derecho;
Nodo *padre;
friend class AVL;
};
 class AVL{
 private:
 enum{IZQUIERDO,DERECHO};
   Nodo *raiz;
   Nodo *actual;
   int contador;
   int altura;
   
   public:
   AVL():raiz(NULL), actual(NULL){}
   ~AVL(){Podar(raiz);}
   void Insertar(const int dat);
   void borrar(cont int dat);
   bool Buscar(const int dat);
   bool Vacio(Nodo *r){return r==NULL;}
   bool EsHoja(Nodo *r){return !r->derecho && !r->izquierdo;}
   const int NumeroNodos();
   const int AlturaArbol();
   int Altura(const int dat);
   int&ValorActual(){ return actual->dato;}
   void Raiz(){actual = raiz;}
   void InOrden(void (*func)(int&, int), Nodo *nodo=NULL, bool r=true;
                void PreOrden(void (*func)(int%, int),Nodo *nodo=NULL, bool r=true);
                void PostOrden(void (*func)(int%, int),Nodo *nodo=NULL, bool r=true);
                private:
                void Equlibrar(Nodo * nodo, int, bool);
                void RSI(Nodo *nodo);
                void RSD(Nodo *nodo);
                void RDI(Nodo *nodo);
                void RDD(Nodo *nodo);
                void Podar(Nodo*&);
                void auxContador(Nodo*);
                void auxAltura(nodo*,int);
                };
                void AVL::Podar(Nodo*&nodo){
                  if(nodo){
                    Podar(nodo->izquierdo);
                    Podar(nodo->derecho);
                    delete nodo;
                    nodo= NULL;
                  }
                }
                void AVL::Insertar(const int dat){
                  
                
