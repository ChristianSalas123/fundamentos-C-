#include<iostream>
using namespace std;
main(void){
	//tipos de datos en c y c++
	int a;
	int b;
	//asignacion de valores a las variables
	a=1;
	b=3;
	int c;
	c=a+b;
	cout<<"hola Upeu"<<endl;
	cout<<"valor de la variable a: "<<a<<endl;
	cout<<"valor de la variable b: "<<b<<endl;
	cout<<"valor de la variable c: "<<c<<endl;
	cout<<"========================================="<<endl;
	//El operador de "desreferenciacion" nos permite vizualizar
	//la direccion de memoria que opcupa una variable. por ejemplo:
	cout<<"la direccion de la variable a es : "<<&a<<endl;
	cout<<"la direccion de la variable b es : "<<&b<<endl;
	cout<<"la direccion de la variable c es : "<<&c<<endl;	
}
