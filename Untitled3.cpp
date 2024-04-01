#include<iostream>
using namespace std;
// ==================== PUNTEROS ================//
main(void){
	//declaramos la variable normal denominada "x" de tipo entero
	int x;
	x=8;
	//declaramos el puntero int
	int *ptr;
	ptr=&x;  // gaurdamos la direccion de X en el puntero
	
	cout<<"la direccion de x es: "<<&x<<endl;  //mopstramos la direccion de x algo como : 0x6ffe14
	cout<<"la valor del puntero es: "<<ptr<<endl;  //mostramos el valor del puntero, esto es 0x6ffe14
	cout<<"la direccion del puntero es ptr: "<<&ptr<<endl;  // el puntero como tal tambien tiene su direccion el cual seria : 0x6ffe00
}
