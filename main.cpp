#include <iostream>
#include <cmath>
using namespace std;
//Clase cuadrado*******************************************
//Definición
class cuadrado{
public:
    int lado;
    cuadrado();
    cuadrado(int);
    cuadrado(const cuadrado &);
    int area();
};
//Implementacion
cuadrado::cuadrado():lado(0){};
cuadrado::cuadrado(int ld):lado(ld){};
cuadrado::cuadrado(const cuadrado &cd):lado(cd.lado){};
int cuadrado::area(){
    return lado*lado;
}
//Clase Triangulo**************************
class triangulo{
public:
    int base, altura;
    triangulo();
    triangulo(int,int);
    triangulo(const triangulo &);
    double area();
};
//Implementacion
triangulo::triangulo():base(0),altura(0){};
triangulo::triangulo(int b, int h):base(b),altura(h){};
triangulo::triangulo(const triangulo &tg):base(tg.base),altura(tg.altura){};
double triangulo::area(){
    return (base*altura)/2;
}
//clase  circulo *********************************************
class circulo{
public:
    int radio;
    circulo();
    circulo(int);
    circulo(const circulo&);
    double area();
};
//implementacion
circulo::circulo():radio(0){};
circulo::circulo(int r):radio(r){};
circulo::circulo(const circulo &cr):radio(cr.radio){};
double circulo::area(){
    //M_PI provee el valor de la constante PI
    return M_PI*pow(radio,2);
}

//Aplicacion
int main(){
    /*
    cuadrado c1;
    cuadrado c2(15);
    cuadrado c3(c2);
    cout<<"Area del cuadrado 1:"<<c1.area()<<endl;
    cout<<"Area del cuadrado 2:"<<c2.area()<<endl;
    cout<<"Area del cuadrado 3:"<<c3.area()<<endl;*/
    cuadrado c;
    triangulo t;
    circulo cr;
    int opt=0;
    while(opt!=4){
        cout<<"1. Area de Cuadrado"<<endl;
        cout<<"2. Area de Triangulo"<<endl;
        cout<<"3. Area de Circulo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Elija un opcion:";
        cin>>opt;
        if(opt==1){
            cout<<"Lado del cuadrado:";
            cin>>c.lado;
            cout<<"Area:"<<c.area()<<"metros cuadrados"<<endl;
        }else if(opt==2){
            cout<<"Base:";
            cin>>t.base;
            cout<<"Altura:";
            cin>>t.altura;
            cout<<"Area:"<<t.area()<<"metros cuadrados"<<endl;
        }else if(opt==3){
            cout<<"Radio:";
            cin>>cr.radio;
            cout<<"Area:"<<cr.area()<<"metros cuadrados"<<endl;
        }else if(opt==4){
            cout<<"Fin del programa"<<endl;
        }else{
            cout<<"Opcion incorrecta"<<endl;
        }

    }

    return 0;
}





